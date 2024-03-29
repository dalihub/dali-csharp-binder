# PROFILE: COMMON

SET( SOURCES
  ${dali_csharp_binder_common_src_files}
  ${dali_csharp_binder_tizen_src_files}
)

ADD_DEFINITIONS( "-DTIZEN_BUILD" )
PKG_CHECK_MODULES(DALIWIDGET widget_viewer_dali)
SET( DALI_CFLAGS ${DALI_CFLAGS} ${DALIWIDGET_CFLAGS})
SET( DALI_LDFLAGS ${DALI_LDFLAGS} ${DALIWIDGET_LDFLAGS})

IF ( ENABLE_RIVE_ANIMATION )
  PKG_CHECK_MODULES(DALIRIVEVIEW dali2-extension-rive-animation-view)
  SET( DALI_CFLAGS ${DALI_CFLAGS} ${DALIRIVEVIEW_CFLAGS})
  SET( DALI_LDFLAGS ${DALI_LDFLAGS} ${DALIRIVEVIEW_LDFLAGS})
  SET( SOURCES ${SOURCES} ${dali_csharp_binder_tizen_rive_src_files} )
ENDIF()

IF( ENABLE_ECORE_WAYLAND2 )
  PKG_CHECK_MODULES(WAYLAND ecore-wl2)
ELSE()
  PKG_CHECK_MODULES(WAYLAND ecore-wayland)
ENDIF()

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
