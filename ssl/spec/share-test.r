\literate[test]

	\begin{abstract}

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

\begin{code}
module test
imports share sunit

signature
  sorts A
  constructors
    F : A * A -> A
    A : A 
    Var : String -> A
    Let : String * A * A -> A

strategies

  main = 
    test-suite(!"share-test",
	test1;
	test2;
	test3
    )

  test1 = 
    apply-and-check(!"test1"
	, share(\ x -> Var(x) \
               ,fail
	       ,\ (x, t, t') -> Let(x, t, t') \
	       )
	, !F(F(A, A), F(F(A, A), F(A, A)))
	, ?Let(Var(var1077592168),A,
           Let(Var(var1075859784),F(Var(var1077592168),Var(var1077592168)),
               F(Var(var1075859784),F(Var(var1075859784),Var(var1075859784)))))
	)

  test2 = 
    apply-and-check(!"test2"
	, graph(\ x -> Var(x) \ )
	, !F(F(A, A), F(F(A, A), F(A, A)))
	, ?[TCons(Var(var1076162904),TCons(F(Var(var1076162872),Var(var1076162888)),TNil)), 
	    TCons(Var(var1076162888),TCons(F(Var(var1076162872),Var(var1076162872)),TNil)), 
	    TCons(Var(var1076162872),TCons(F(Var(var1077895264),Var(var1077895264)),TNil)),
	    TCons(Var(var1077895264),TCons(A,TNil))]
	)

  test3 = 
    apply-and-check(!"test3"
	, inline-graph(fail, \ (x, t, t') -> Let(x, t, t') \ )
	, ![TCons(Var(1076162904),TCons(F(Var(1076162872),Var(1076162888)),TNil)), 
	    TCons(Var(1076162888),TCons(F(Var(1076162872),Var(1076162872)),TNil)),
	    TCons(Var(1076162872),TCons(F(Var(1077895264),Var(1077895264)),TNil)), 
	    TCons(Var(1077895264),TCons(A,TNil))]
	, ?Let(Var(var1077895264),A,
           Let(Var(var1076162872),F(Var(var1077895264),Var(var1077895264)),
               F(Var(var1076162872),F(Var(var1076162872),Var(var1076162872)))))
	)     
\end{code}
