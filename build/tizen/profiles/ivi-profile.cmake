# PROFILE: IVI

SET( SOURCES
  ${dali_csharp_binder_common_src_files}
  ${dali_csharp_binder_tizen_src_files}
)

IF( ENABLE_LEGACY_BINDER_BUILD )
  SET( SOURCES ${SOURCES} ${dali_csharp_binder_legacy_src_files} )
ENDIF()

ADD_DEFINITIONS( "-DTIZEN_BUILD" )
PKG_CHECK_MODULES(WAYLAND ecore-wl2)

# WAYLAND
IF( ENABLE_WAYLAND )
  SET( DALI_CFLAGS ${DALI_CFLAGS}
    -DWL_EGL_PLATFORM
    ${WAYLAND_CFLAGS}
  )
  SET( DALI_LDFLAGS ${DALI_LDFLAGS}
    ${WAYLAND_LDFLAGS}
  )
ELSE()
  SET( DALI_CFLAGS ${DALI_CFLAGS}
    ${X11_CFLAGS}
  )
  SET( DALI_LDFLAGS ${DALI_LDFLAGS}
    ${X11_LDFLAGS}
    ${ECORE_X_LDFLAGS}
  )
ENDIF()

# Set the header directories
SET( PROFILE_INCLUDE_DIRECTORIES
  ${WAYLAND_INCLUDE_DIRS}
  ${DALIWIDGET_INCLUDE_DIRS}
  ${DALIRIVEVIEW_INCLUDE_DIRS}
)
