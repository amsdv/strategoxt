module test47
strategies

  hd : [x | xs] -> x
  tl : [x | xs] -> xs

  main = 
    where(foo(|<hd>))
    ; bar(|<hd>,[<tl>])

  foo(|prog) =
    ?[prog | args]
    ; !(prog, args)
    ; swap

  bar(|prog,args2) =
    ?[prog | args]
    ; !(prog, args2)
    ; swap

  swap : (x, y) -> (y, x)
    
