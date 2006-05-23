includedir = $(prefix)/include/stratego-lib

include_HEADERS = \
  collection-hash-table-common.h  \
  collection-list-common.h  \
  stratego-lib.h \
  system-io-dir.h \
  system-io-term.h \
  system-posix-file.h \
  term-common.h  \
  term-placeholder.h \
  term-string.h \
  collection-set-indexed.h \
  stratego-lib-common.h  \
  system-posix-error.h \
  system-posix-process.h \
  term-integer.h \
  term-real.h \
  util-time.h

lib_LTLIBRARIES = libstratego-lib-native.la

libstratego_lib_native_la_SOURCES  = $(LIB_SOURCES)
libstratego_lib_native_la_LIBADD   = $(STRATEGO_RUNTIME_UNINSTALLED_LIBS) $(ATERM_LIBS)
libstratego_lib_native_la_CPPFLAGS = $(STRATEGO_RUNTIME_UNINSTALLED_CFLAGS) $(ATERM_CFLAGS)
libstratego_lib_native_la_CFLAGS   = -Wall
libstratego_lib_native_la_LDFLAGS  = -avoid-version -no-undefined

LIB_SOURCES = \
  $(include_HEADERS) \
  collection-hash-table-common.c \
  collection-list-common.c \
  system-io-dir.c \
  system-io-term.c \
  system-posix-file.c \
  term-common.c \
  term-placeholder.c \
  term-string.c \
  collection-set-indexed.c \
  stratego-lib-common.c  \
  system-posix-error.c \
  system-posix-process.c \
  term-integer.c \
  term-real.c \
  util-time.c

bootclean: