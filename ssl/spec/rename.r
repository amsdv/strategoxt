\literate[rename]

	\begin{abstract}

	Renaming of bound variables is determined by the shape of
	variables and binding constructs. Three generic strategies
	are defined that cater for different complexities of binding
	constructs.

	\end{abstract}

% Copyright (C) 1998-2001 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

	Variable binding constructs protect variables from clashing
	with variables in other parts of a program when their names
	are the same. To prevent the introduction of name clashes
	during program transformation it can be useful to give 
	all variable bindings a unique name. This module defines three
	generic strategies for bound variable renaming all based on
	the same idea, but dealing with increasingly complex variable
	binding models.

	Renaming depends \emph{only} on the shape of variable bindings
	and variable occurences. Other language constructs are irrelevant.

	In the generic strategies the following assumptions about
	binding constructs are made: (1)
	There is a subtree that covers the scope in which the
	variables are bound. (2) variables are atomic, i.e., do not
	contain subterms that are
	variables or binding constructs.

	Approach: indicate shape of variable occurences and variable
	binders

	The strategy \verb|rename(isvar, mkvar, bnd)| renames all
	bound variables in a term to fresh variables;

	Parameters:

  	isvar: Succeeds if applied to a variable

  	newvar: Takes a string and builds a variable

  	bnd: Maps a binding construct to the list of bound variables

  	apply(a, b, c): reconstruct the binding construct with fresh
  	variables;

	- a should be applied to the subterm containing the
	variable(s)

	- b should be applied to the subterms in which the variables
	are bound

	- c should be applied to the subterms in which the variables
	are not bound;

\begin{code}
module rename
imports simple-traversal tuple list env-traversal
rules

  RnVar(isvar : name * (name -> env) -> term) :
    (t, env) -> <isvar(split(id, !env); lookup)> t

  RnBinding(bndvrs) :
    (t, env1) -> (t, env1, env2)
    where <bndvrs> t => xs; map(new) => ys; 
          <conc>(<zip(id)>(xs,ys), env1) => env2

  DistBinding(s) :
    (t, env1, env2) -> <all( \x -> <s>(x, env2)\ )> t

strategies

  // renaming bound variables assuming that variables are bound
  // in all subterms of a binding construct
  // variable declarations in binding constructs are assumed to
  // have the same shape as variable uses 

  rename(isvar : name * (name -> env) -> term
        , bndvars) = 
    \ t -> (t, []) \ ;
    rec x(env-alltd(RnVar(isvar)
                    <+ RnBinding(bndvars);
                       DistBinding(x)))

rules

  DistBinding(s, boundin : term * (term -> term) * (term -> term) * (term -> term) -> term):
    (t, env1, env2) -> <boundin(\x -> <s>(x, env2)\
                               ,\x -> <s>(x, env1)\
                               ,id)> t

strategies

  // renaming while making a distinction between subterms
  // in which the variables are bound or not
  // variables at binding sites are assumed to have
  // the same shape as other variable occurences

  rename(isvar : name * (name -> env) -> term
        , bndvars
        , boundin : term * (term -> term) * (term -> term) * (term -> term) -> term) = 
    \ t -> (t, []) \ ;
    rec x(env-alltd(RnVar(isvar)
                    <+ RnBinding(bndvars);
                       DistBinding(x, boundin)))

rules

  RnBinding(bndvrs, paste : term * (term -> vars) -> term) :
    (t, env1) -> (<paste(!ys)> t, env1, env2)
    where <bndvrs> t => xs; map(new) => ys; 
          <conc>(<zip(id)>(xs,ys), env1) => env2


strategies

  rename(isvar : name * (name -> env) -> term
        , bndvars
        , boundin : term * (term -> term) * (term -> term) * (term -> term) -> term
        , paste : term * (term -> vars) -> term
        )
  = \ t -> (t, []) \ ;
    rec x(env-alltd(RnVar(isvar)
                    <+ RnBinding(bndvars, paste);
                       DistBinding(x, boundin)))
\end{code}


