# PROFILE: MACOS

SET( SOURCES
  ${dali_csharp_binder_common_src_files}
)

IF( ENABLE_LEGACY_BINDER_BUILD )
  SET( SOURCES ${SOURCES} ${dali_csharp_binder_legacy_src_files} )
ENDIF()