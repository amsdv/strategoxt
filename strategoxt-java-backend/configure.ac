AC_PREREQ([2.58])
AC_INIT([strc-java],[0.17.92],[bugs@strategoxt.org])
AM_INIT_AUTOMAKE

# set the prefix immediately to the default prefix 
test "x$prefix" = xNONE && prefix=$ac_default_prefix

m4_pattern_forbid([^XT_])

XT_SETUP
XT_SVN_REVISION
# comment to make this a stable release
XT_PRE_RELEASE

XT_USE_XT_PACKAGES
XT_USE_JAVA_FRONT
#XT_USE_JDK
XT_TERM_DEFINE 
XT_USE_LANGUAGE_TESTS

AC_PROG_CC
AC_DISABLE_STATIC
AC_PROG_LIBTOOL

#XT_ARG_WITH_JAR([aterm-java],[ATERM],[aterm.jar],[aterm-1.6.jar])

### OUTPUT #############################
AC_CONFIG_FILES([
  strc-java.pc
  Makefile
  syn/Makefile
  trans/Makefile
  java/Makefile
  test/Makefile
  tools/Makefile
])
AC_OUTPUT
