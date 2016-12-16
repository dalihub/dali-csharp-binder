#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.64])
AC_INIT([dali-csharp-binder], [0.0.0])
AC_CONFIG_SRCDIR([configure.ac])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE(1.6)

# Checks for programs.
AC_PROG_CXX
AC_PROG_LIBTOOL

# Checks for libraries.
PKG_CHECK_MODULES([DALI], [dali-core dali-adaptor dali-toolkit])

AC_CONFIG_FILES([
Makefile
dali-csharp-binder/Makefile
])
AC_OUTPUT([
dali-csharp-binder.pc
])
