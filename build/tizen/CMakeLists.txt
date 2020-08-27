cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 99)

set(name "dali2-csharp-binder")

project(${name} CXX)

set(${name}_VERSION_MAJOR 2)
set(${name}_VERSION_MINOR 0)
set(${name}_VERSION_PATCH 0)
set(${name}_VERSION ${${name}_VERSION_MAJOR}.${${name}_VERSION_MINOR}.${${name}_VERSION_PATCH})

add_definitions(-DDALI_PROFILE_WINDOWS)
add_compile_options( /FIdali-windows-dependencies.h ) # Adds missing definitions.
add_compile_options( /vmg ) # Avoids a 'reinterpret_cast' compile error while compiling signals and callbacks.
add_compile_options( /wd4251 ) # Ignores warning C4251: "'identifier' : class 'type' needs to have dll-interface to be used by clients of class 'type2'"

add_definitions(-D_USE_MATH_DEFINES)

set(VCPKG_INCLUDE_DIR "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include")

find_package( pthreads REQUIRED )
find_package( curl REQUIRED )
find_library( GETOPT_LIBRARY NAMES getopt )
find_library( EXIF_LIBRARY NAMES libexif )

find_package( png REQUIRED )
find_package( gif REQUIRED )
find_package( jpeg REQUIRED )
find_library( TURBO_JPEG_LIBRARY NAMES turbojpeg )

find_package( unofficial-fontconfig REQUIRED )
find_package( freetype REQUIRED )
find_package( harfbuzz REQUIRED )
find_library( FRIBIDI_LIBRARY NAMES fribidi )

find_package( unofficial-angle REQUIRED )
find_package( unofficial-cairo REQUIRED )

find_package( WebP REQUIRED )

find_package( dali-windows-dependencies REQUIRED )
find_package( dali2-core REQUIRED )
find_package( dali2-adaptor REQUIRED )
find_package( dali2-toolkit REQUIRED )

# Set up the include dir
set( INCLUDE_DIR ${CMAKE_INSTALL_PREFIX}/include )
set( LIB_DIR ${CMAKE_INSTALL_PREFIX}/lib )
set( BIN_DIR ${CMAKE_INSTALL_PREFIX}/bin )

set( REQUIRED_LIBS
  PThreads4W::PThreads4W
  CURL::libcurl
  ${GETOPT_LIBRARY}
  ${EXIF_LIBRARY}
  ${PNG_LIBRARIES}
  ${GIF_LIBRARIES}
  JPEG::JPEG
  ${TURBO_JPEG_LIBRARY}
  unofficial::fontconfig::fontconfig
  Freetype::Freetype
  harfbuzz::harfbuzz
  ${FRIBIDI_LIBRARY}
  unofficial::angle::libEGL
  unofficial::angle::libGLESv2
  unofficial::cairo::cairo
  WebP::webp
  WebP::webpdemux
  dali-windows-dependencies::dali-windows-dependencies
  dali2-core::dali2-core
  dali2-adaptor::dali2-adaptor
  dali2-toolkit::dali2-toolkit
)

include_directories(
  ${VCPKG_INCLUDE_DIR}
  ${CMAKE_INSTALL_PREFIX}/include
  ${INCLUDE_DIR}
)

link_directories(${LIB_DIR})

set(dali_csharp_binder_dir ${CMAKE_CURRENT_SOURCE_DIR}/../../dali-csharp-binder)

set(SOURCES
  ${dali_csharp_binder_dir}/src/callbackbase_wrap.cpp
  ${dali_csharp_binder_dir}/src/keyboard_focus_manager_wrap.cpp
  ${dali_csharp_binder_dir}/src/devel-property-wrap.cpp
  ${dali_csharp_binder_dir}/src/version-check.cpp
  ${dali_csharp_binder_dir}/src/layout-controller.cpp
  ${dali_csharp_binder_dir}/src/flex-layout.cpp
  ${dali_csharp_binder_dir}/src/gestures.cpp
  ${dali_csharp_binder_dir}/src/view-wrapper-impl-wrap.cpp
  ${dali_csharp_binder_dir}/src/event-thread-callback-wrap.cpp
  ${dali_csharp_binder_dir}/src/application.cpp
  ${dali_csharp_binder_dir}/src/text-editor.cpp
  ${dali_csharp_binder_dir}/src/text-field.cpp
  ${dali_csharp_binder_dir}/src/window.cpp
  ${dali_csharp_binder_dir}/src/tts-player.cpp
  ${dali_csharp_binder_dir}/src/input-method-context.cpp
  ${dali_csharp_binder_dir}/src/input-method-options.cpp
  ${dali_csharp_binder_dir}/src/animation.cpp
  ${dali_csharp_binder_dir}/src/adaptor.cpp
  ${dali_csharp_binder_dir}/src/extents.cpp
  ${dali_csharp_binder_dir}/src/text-label.cpp
  ${dali_csharp_binder_dir}/src/text-utils.cpp
  ${dali_csharp_binder_dir}/src/dali_wrap.cpp
)

add_library(${name} SHARED ${SOURCES})
target_link_libraries(${name} ${REQUIRED_LIBS})

set_target_properties(${name}
  PROPERTIES
  VERSION ${${name}_VERSION}
  SOVERSION ${${name}_VERSION_MAJOR}
  CLEAN_DIRECT_OUPUT 1
)

# Install the pdb file.
if( ${CMAKE_BUILD_TYPE} MATCHES Debug )
  set(BIN_DIR ${BIN_DIR}/debug)
  set(LIB_DIR ${LIB_DIR}/debug)
  install(FILES ${CMAKE_CURRENT_BINARY_DIR}/Debug/${name}.pdb DESTINATION ${BIN_DIR} )
endif()

# Install the library so file and symlinks
install( TARGETS ${name}
  LIBRARY DESTINATION ${LIB_DIR}
  ARCHIVE DESTINATION ${LIB_DIR}
  RUNTIME DESTINATION ${BIN_DIR}
)
