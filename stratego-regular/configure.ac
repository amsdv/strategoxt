AC_PREREQ([2.60])
AC_INIT([stratego-regular],[1.8],[users@strategoxt.org])
AC_CONFIG_AUX_DIR([../config])
AM_INIT_AUTOMAKE

test "x$prefix" = xNONE && prefix=$ac_default_prefix

XT_INTERNAL_USE_XT_PACKAGES
XT_TERM_DEFINE

AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LIBTOOL

AC_CONFIG_FILES([
  Makefile

  syn/Makefile
  pp/Makefile

  lib/Makefile

  trans/Makefile
  trans/sig/Makefile
  trans/sdf2rtg/Makefile
  trans/interpret/Makefile

  xtc/Makefile

  tests/Makefile

  tests/syn/Makefile
  tests/syn/rtg/Makefile
  tests/syn/rtg/rtgs/Makefile
  tests/sdf2rtg/Makefile

])
AC_OUTPUT
