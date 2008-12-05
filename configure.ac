#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.61)
AC_INIT(swigstarterkit, 0.0.1 )
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([src/main.cpp])
AC_CONFIG_HEADER([config.h])
AC_CONFIG_MACRO_DIR([m4])

# Checks for programs.
AC_PROG_CXX
AC_PROG_LIBTOOL
AC_PROG_INSTALL

PKG_CHECK_MODULES(LUA, [lua5.1])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
AC_HEADER_STDBOOL

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 include/Makefile
                 src/Makefile
                 lib/Makefile
                 swig/Makefile
                 swig/lua/Makefile
                 swig/lua/examples/Makefile
                 swig/perl5/Makefile
                 swig/perl5/examples/Makefile
                 swig/python/Makefile
                 swig/python/examples/Makefile
                 swig/php5/Makefile
                 swig/php5/examples/Makefile
                 swig/ruby/Makefile
                 swig/ruby/examples/Makefile
                 swig/java/Makefile
                 swig/java/examples/Makefile])
AC_OUTPUT
