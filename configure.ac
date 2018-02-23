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

# added for key grab binding only for tizen
AC_ARG_ENABLE(tizenBuild,
              [  --enable-tizenBuild       build on tizen],
              enable_tizenBuild=yes,
              enable_tizenBuild=no)

AM_CONDITIONAL([TIZENBUILD], [test x$enable_tizenBuild = xyes])

PKG_PROG_PKG_CONFIG
# Checks for libraries. added for widget_viewer_dali binding only for tizen
# added for key grab binding only for tizen
if test x$enable_tizenBuild = xyes; then
  PKG_CHECK_MODULES(DALI, dali-core dali-adaptor dali-toolkit widget_viewer_dali)
  PKG_CHECK_MODULES(ECORE_WAYLAND, ecore-wayland)
else
  PKG_CHECK_MODULES(DALI, dali-core dali-adaptor dali-toolkit)
fi

AC_CONFIG_FILES([
Makefile
dali-csharp-binder/Makefile
])
AC_OUTPUT([
dali-csharp-binder.pc
])
