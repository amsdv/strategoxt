\literate[simple-traversal]

	\begin{abstract}

	The primitive term traversal operators of Stratego (all, some, one)
	can be combined with the other control operators in a wide
	variety of ways to define full term traversals.
	This module defines 
	a collection of the most common generic one-pass traversals
	over terms.

	\end{abstract}

\begin{code}
module simple-list-traversal
imports conditional simple-traversal
strategies
\end{code} 

	Term traversals can be categorized into classes according to
	how much of the term they traverse and to which parts
	of the term they modify.

	\paragraph{Everywhere}

	The most general class of traversals visits every node
	of a term and applies a transformation to it. The following
	operators define traversals that apply a strategy \verb|s|
	to all nodes of a term.

\begin{code}
  all-l(s) = [s | s] <+ all(s)


  topdown-l(s) = 
    rec x(s; all-l(x))

  bottomup-l(s) = 
    rec x(all-l(x); s)

  downup-l(s) = 
    rec x(s; all-l(x); s)

  downup-l(s1, s2) = 
    rec x(s1; all-l(x); s2)

  downup2-l(s1, s2) = 
    rec x(s1; all-l(x); s2)
\end{code} 
	
	The traversals above go through all constructors. If it
	is not necessary to traverse the entire tree, the following
	versions of the traversals can be used. They are parameterized
	with a strategy operator \verb|stop| that 

\begin{code}
  topdownS-l(s, stop: a * (a -> a) -> a) = 
    rec x(s; (stop(x) <+ all-l(x)))

  bottomupS-l(s, stop: a * (a -> a) -> a) = 
    rec x((stop(x) <+ all-l(x)); s)

  downupS-l(s, stop: a * (a -> a) -> a) = 
    rec x(s; (stop(x) <+ all-l(x)); s)

  downupS-l(s1, s2, stop: a * (a -> a) -> a) = 
    rec x(s1; (stop(x) <+ all-l(x)); s2)
\end{code} 

	A variation on bottomup is a traversal that also provides the
	original term as well as the term in which the direct subterms
	have been transformed. (also known as a paramorphism?)

\begin{code}
  bottomup-para-l(s) = 
    rec x(!(<id>, <all-l(x)>); s)
\end{code}

	\paragraph{Frontier}

	Find all topmost applications of \verb|s|;

\begin{code}
  alltd-l(s) = 
    rec x(s <+ all-l(x))

  alldownup2-l(s1, s2) = 
    rec x((s1 <+ all-l(x)); s2)

  alltd-fold-l(s1, s2) = 
    rec x(s1 <+ all-l(x); s2)
\end{code}
	

% Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
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
