# PROFILE: UBUNTU

SET( SOURCES
  ${dali_csharp_binder_common_src_files}
)
SET( ENABLE_WIDGET_VIEWER_DALI ON CACHE BOOL "Enable widget viewer dali for Ubuntu" FORCE)

IF( ENABLE_LEGACY_BINDER_BUILD )
  SET( SOURCES ${SOURCES} ${dali_csharp_binder_legacy_src_files} )
ENDIF()