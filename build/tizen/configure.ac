#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

m4_define([dali_version],[2.0.0])
AC_INIT([dali], [dali_version])
AM_INIT_AUTOMAKE([-Wall foreign])
AC_CONFIG_MACRO_DIR([m4])

# Checks for programs.
AC_PROG_CXX
AC_PROG_LIBTOOL
AC_PROG_MKDIR_P

m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

LT_INIT

DALI_CSHARP_BINDER_VERSION=dali_version
AC_SUBST(DALI_CSHARP_BINDER_VERSION)

AC_ARG_ENABLE([debug],
              [AC_HELP_STRING([--enable-debug],
                              [Turns on debugging])],
              [enable_debug=$enableval],
              [enable_debug=no])

DALI_CSHARP_BINDER_CFLAGS="$DALI_CSHARP_BINDER_CFLAGS -std=c++17 "
if test "x$enable_debug" = "xyes"; then
  DALI_CSHARP_BINDER_CFLAGS="$DALI_CSHARP_BINDER_CFLAGS -DDEBUG_ENABLED"
fi

# Tizen Profile options
AC_ARG_ENABLE([profile],
              [AC_HELP_STRING([--enable-profile=COMMON,MOBILE,WEARABLE,TV,IVI,UBUNTU],
                            [Select the variant of tizen])],
              [enable_profile=$enableval],
              [enable_profile=UBUNTU])

# Ensure valid profile selected
if test "x$enable_profile" != "xCOMMON" -a "x$enable_profile" != "xMOBILE" -a "x$enable_profile" != "xWEARABLE" -a "x$enable_profile" != "xTV" -a "x$enable_profile" != "xIVI" -a "x$enable_profile" != "xUBUNTU"; then
  AC_MSG_ERROR([$enable_profile is an invalid profile])
fi


AC_ARG_ENABLE(wayland,
              [  --enable-wayland       Build on Wayland],
              enable_wayland=yes,
              enable_wayland=no)

AC_ARG_ENABLE(ecore_wayland2,
              [  --enable-ecore-wayland2  Build on Ecore Wayland2],
              enable_ecore_wayland2=yes,
              enable_ecore_wayland2=no)

AC_ARG_ENABLE([rive-animation-view],
              [AC_HELP_STRING([--enable-rive-animation-view],
              [enables the rive animation view])],
              [enable_rive_animation_view=yes],
              [enable_rive_animation_view=no])


DALI_CSHARP_BINDER_CFLAGS="$DALI_CSHARP_BINDER_CFLAGS -DDALI_PROFILE_${enable_profile}"
DALI_PROFILE_CFLAGS=" -DDALI_PROFILE_${enable_profile}"
AM_CONDITIONAL([COMMON_PROFILE], [test x$enable_profile = xCOMMON])
AM_CONDITIONAL([MOBILE_PROFILE], [test x$enable_profile = xMOBILE])
AM_CONDITIONAL([WEARABLE_PROFILE], [test x$enable_profile = xWEARABLE])
AM_CONDITIONAL([TV_PROFILE], [test x$enable_profile = xTV])
AM_CONDITIONAL([IVI_PROFILE], [test x$enable_profile = xIVI])
AM_CONDITIONAL([UBUNTU_PROFILE], [test x$enable_profile = xUBUNTU])
AM_CONDITIONAL([WAYLAND], [test x$enable_wayland = xyes])
AM_CONDITIONAL([ECORE_WAYLAND2], [test x$enable_ecore_wayland2 = xyes])
AM_CONDITIONAL([ENABLE_RENAME_SO], [test x$enable_rename_so = xyes])
AM_CONDITIONAL([RIVE_ANIMATION], [test x$enable_rive_animation_view = xyes])

### AM_CONDITIONAL([TIZENBUILD], [test x$enable_tizenBuild = xyes])
### AM_CONDITIONAL([ECOREWL2], [test x$enable_ecoreWl2 = xyes])

PKG_CHECK_MODULES(DALICORE, dali2-core)
PKG_CHECK_MODULES(DALIADAPTOR, dali2-adaptor)
PKG_CHECK_MODULES(DALITOOLKIT, dali2-toolkit)

if test "x$enable_profile" = "xMOBILE" -o "x$enable_profile" = "xWEARABLE" -o "x$enable_profile" = "xTV" -o "x$enable_profile" = "xIVI" -o "x$enable_profile" = "xCOMMON"; then
  PKG_CHECK_MODULES(DALIWIDGET, widget_viewer_dali)
  if test "x$enable_rive_animation_view" = "xyes"; then
    PKG_CHECK_MODULES(DALIRIVEVIEW, dali2-extension-rive-animation-view)
  fi

  if test x$enable_ecore_wayland2 = xyes; then
    PKG_CHECK_MODULES(ECORE_WL2, ecore-wl2)
  else
    PKG_CHECK_MODULES(ECORE_WAYLAND, ecore-wayland)
  fi
fi

if test "x$enable_profile" = "xWEARABLE"; then
  PKG_CHECK_MODULES(DALIWATCHVIEW, watch_viewer_dali)
  PKG_CHECK_MODULES(DALIWATCHHOLDERBASE, watch-holder-base)
fi

if test x$DALI_DATA_RW_DIR != x; then
  dataReadWriteDir=$DALI_DATA_RW_DIR
else
  dataReadWriteDir=${prefix}/share/dali/
fi

if test x$DALI_DATA_RO_DIR != x; then
  dataReadOnlyDir=$DALI_DATA_RO_DIR
else
  dataReadOnlyDir=${prefix}/share/dali/
fi

if test x$includedir != x; then
  INCLUDE_DIR=$includedir
else
  INCLUDE_DIR=$prefix/include/
fi
if test x$libdir != x; then
  LIB_DIR=$libdir
else
  LIB_DIR=$prefix/lib/
fi
if test x$bindir != x; then
  BIN_DIR=$bindir
else
  BIN_DIR=$prefix/bin/
fi

PREFIX=$prefix
EXEC_PREFIX=$exec_prefix
DEV_INCLUDE_PATH=$INCLUDE_DIR

AC_SUBST(dataReadWriteDir)
AC_SUBST(dataReadOnlyDir)
AC_SUBST(DALI_CSHARP_BINDER_CFLAGS)
AC_SUBST(DALI_PROFILE_CFLAGS)

AC_SUBST(INCLUDE_DIR)
AC_SUBST(LIB_DIR)
AC_SUBST(BIN_DIR)

AC_SUBST(PREFIX)
AC_SUBST(EXEC_PREFIX)
AC_SUBST(DEV_INCLUDE_PATH)

AC_CONFIG_FILES([Makefile])
AC_CONFIG_FILES([dali2-csharp-binder.pc])

AC_OUTPUT


echo "
Configuration
-------------
  Prefix:                           $prefix
  EXEC_PREFIX:                      $EXEC_PREFIX
  INCLUDE_DIR:                      $INCLUDE_DIR
  LIB_DIR:                          $LIB_DIR
  BIN_DIR:                          $BIN_DIR
  Debug Build:                      $enable_debug
  Compile flags:                    $DALI_CSHARP_BINDER_CFLAGS
  Profile:                          $enable_profile
  Data Dir (Read/Write):            $dataReadWriteDir
  Data Dir (Read Only):             $dataReadOnlyDir
"
