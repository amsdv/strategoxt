\literate[tables]

\begin{abstract}
	Hash tables support constant time storing and retrieving of 
	values associated with keys. This module provides an interface
	to the hash-table facility provided by the ATerm library.
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
module tables
imports list
strategies

  table-create 	= 
    ?name; prim("SSL_table_create", name)

  table-destroy = 
    ?name; prim("SSL_table_destroy", name)

  table-put 	= 
    where(?(table,key,value); prim("SSL_table_put",table,key,value))

  table-get 	= 
    ?(table, key); prim("SSL_table_get",table,key)

  table-remove 	= 
    where(?(table, key); prim("SSL_table_remove",table,key))

  table-keys 	= 
    ?table; prim("SSL_table_keys",table)

  table-getlist = ?name; 
    table-keys; map(\ x -> (x, <table-get> (name, x))\ )

  table-putlist = ?(name, list); 
    <map({x,y: ?(x, y); <table-put> (name, x, y)})> list
\end{code}

\paragraph{Usage}

\begin{itemize}

\item \verb|<table-create> name| creates a table with name
	\verb|name|, which can be any term.

\item \verb|<table-destroy> name| destroys it.

\item \verb|<table-put> (name, key, value)| associates \verb|value|
with \verb|key| in the \verb|name| table.

\item \verb|<table-get> (name, key)| yields the value associated to
\verb|key| or fails.

\item \verb|<table-remove> (name, key)| removes the entry for
\verb|key| from table \verb|name|.

\item \verb|<table-keys> name| produces the list of keys of table
\verb|name|.

\item \verb|<table-getlist> name| produces the list of (key,value) pairs
in the table \verb|name|

\item \verb|<table-putlist> (name, list)| puts the (key,value) pairs in \verb|list| into table \verb|name|

\end{itemize}

	Symbol tables that deal with scoped bindings need to be able
	to store multiple bindings for the same symbol. The following
	table operations can be used to maintain a stack (list)
	of values for each key.

\begin{code}
strategies

  table-push = ?(dis, key, val);
    where(<table-put>(dis, key, [val | <table-get <+ ![]>(dis, key)]))

  table-pop = ?(dis, key);
    where(<table-put>(dis, key, <table-get; Tl <+ ![]>(dis, key)))

  table-pop-get = ?(dis, key);
    where( <table-get>(dis, key) => [val | vals]
         ; <table-put>(dis, key, vals)
         ); !val

  table-lookup = ?(dis, key);
    <table-get>(dis, key); Hd

  table-replace = ?(dis, key, value);
    where(<table-get>(dis, key) => [_|values]
         ; <table-put>(dis, key, [value|values])
         )

  table-union = ?(table, key, val);
    where(<set> (table, key, <union> (val, <get <+ ![]> (table, key))))

  table-diff = ?(table, key, val);
    where(<set> (table, key, <diff> (<get <+ ![]> (table, key), val)))

  set = table-put
  get = table-get

strategies

  // these strategies should no longer be used.

  destroy-display = obsolete(!"destroy-display; use table-destroy"); 
		    table-destroy  
  create-display  = obsolete(!"create-display; use table-create");  
		    table-create
  display-lookup  = obsolete(!"display-lookup; use table-lookup");  
		    table-lookup
  display-replace = obsolete(!"display-replace; use table-replace"); 
		    table-replace
  display-pop     = obsolete(!"display-pop; use table-pop");     
		    table-pop
  display-push    = obsolete(!"display-push; use table-push");    
		    table-push
  push-set	  = obsolete(!"push-set; use table-push");        
		    table-push
  pop-get	  = obsolete(!"pop-get; use table-pop-get");         
		    table-pop-get
  union-set       = obsolete(!"union-set; use table-union");       
		    table-union
  diff-set        = obsolete(!"diff-set; use table-diff");        
		    table-diff
  create-table 	  = obsolete(!"create-table: use table-create"); 
		    table-create
  destroy-table   = obsolete(!"destroy-table: use table-destroy"); 
		    table-destroy
\end{code}