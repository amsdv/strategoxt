module dynamic-rules
imports scoped-finite-map
signature
  constructors
    Keys      : Keys
    Keys      : Term -> Keys
    Keys      : Term * Term -> Keys
    Keys      : Term * Term * Term -> Keys
    Keys      : Term * Term * Term * Term -> Keys
    Keys      : Term * Term * Term * Term * Term -> Keys
    Keys      : Term * Term * Term * Term * Term * Term -> Keys
    Keys      : Term * Term * Term * Term * Term * Term * Term -> Keys
    Keys      : Term * Term * Term * Term * Term * Term * Term * Term -> Keys
    Keys      : Term * Term * Term * Term * Term * Term * Term * Term * Term -> Keys
    Keys      : Term * Term * Term * Term * Term * Term * Term * Term * Term * Term -> Keys

    Defined   : Vals
    Defined   : Term -> Vals
    Defined   : Term * Term -> Vals
    Defined   : Term * Term * Term -> Vals
    Defined   : Term * Term * Term * Term -> Vals
    Defined   : Term * Term * Term * Term * Term -> Vals
    Defined   : Term * Term * Term * Term * Term * Term -> Vals
    Defined   : Term * Term * Term * Term * Term * Term * Term -> Vals
    Defined   : Term * Term * Term * Term * Term * Term * Term * Term -> Vals
    Defined   : Term * Term * Term * Term * Term * Term * Term * Term * Term -> Vals
    Defined   : Term * Term * Term * Term * Term * Term * Term * Term * Term * Term -> Vals

    Undefined : Vals
