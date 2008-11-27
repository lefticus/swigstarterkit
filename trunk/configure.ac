#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.61)
AC_INIT(SwigStarterKit, 0.0.1 )
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
                 swig/lua/examples/Makefile])
AC_OUTPUT
