module congruence-laws
imports stratego desugar

rules

  MatchingCongruence :
    Cong(f, ss) -> <Mapp2> Match(Op(f, ts))
    where <map(\ Match(t) -> t \ + \ Id -> Wld \ )> ss => ts

  TransformingCongruence :
    Cong(f, ss) -> 
    Scope([a | <conc>(xs, ys)], 
          Seq(<Mapp2> Match(Anno(Op(f, xs'), Var(a))),
          Seq(Seqs(ss'),
              <Bapp2> Build(Anno(Op(f, ys'), Var(a))))))
    where <map(new)> ss => xs; <map(!Var(<id>))> xs => xs'; new => a;
	  <map(new)> ss => ys; <map(!Var(<id>))> ys => ys';
          <zip(\ ((x,y), s) -> Seq(Build(Var(x)), Seq(s, Match(Var(y)))) \ )> (<zip(id)>(xs,ys), ss) => ss'

  TransformingAnnoCongruence :
    Call(SVar("Anno_Cong__"), [Cong(f, ss), s]) -> 
    Scope([a, b | <conc>(xs,ys)], 
          Seq(<Mapp2> Match(Anno(Op(f, xs'), Var(a))),
          Seq(Seqs(ss'),
              <Bapp2> Build(Anno(Op(f, ys'), Var(b))))))
    where <map(new)> [s | ss] => [a | xs]; map(!Var(<id>)) => xs';
	  <map(new)> [s | ss] => [b | ys]; map(!Var(<id>)) => ys';
          <zip(\ ((x,y), s) -> Seq(Build(Var(x)), Seq(s, Match(Var(y)))) \ )> 
            (<zip(id)>(xs,ys), [s | ss]) => ss'

(*
  Canon :
    Cong(c, ss) -> 
    Scope(<conc>(xs,ys), 
          Seq(Match(Op(c, <map(\ x -> Var(x)\ )> xs)), 
              Seq(Where(<foldr(!Id,\ (s1,s2) -> Seq(s1,s2) \ )> ss'),
                  Build(Op(c, <map(\ x -> Var(x)\ )> ys)))))
    where <unzip(ApplyStrat)> ss => (xys, ss')
        ; <unzip(id)> xys => (xs, ys)

  ApplyStrat : 
    s -> ((x,y),Seq(Build(Var(x)), Seq(s, Match(Var(y)))))
    where new => x; new => y
*)
