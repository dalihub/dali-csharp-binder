cmake_minimum_required(VERSION 3.8.2)

SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_C_STANDARD 99)

SET(name "dali2-csharp-binder")

project(${name} CXX)

SET(GCC_COMPILER_VERSION_REQUIRED "6")
IF(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  IF(CMAKE_CXX_COMPILER_VERSION VERSION_LESS GCC_COMPILER_VERSION_REQUIRED)
    MESSAGE(FATAL_ERROR "The GCC required compiler version is " ${GCC_COMPILER_VERSION_REQUIRED})
  ENDIF()
ENDIF()

SET(${name}_VERSION_MAJOR 2)
SET(${name}_VERSION_MINOR 0)
SET(${name}_VERSION_PATCH 0)
SET(${name}_VERSION ${${name}_VERSION_MAJOR}.${${name}_VERSION_MINOR}.${${name}_VERSION_PATCH})

SET(DALI_CSHARP_BINDER_VERSION ${${name}_VERSION} )

# Define options to CMake
OPTION(ENABLE_EXPORTALL          "Enable Export all symbols" OFF)
OPTION(ENABLE_DEBUG              "Enable Debug" OFF)
OPTION(ENABLE_PROFILE            "Enable Profile" OFF)
OPTION(ENABLE_TRACE              "Enable Trace" ON)
OPTION(ENABLE_PKG_CONFIGURE      "Use pkgconfig" ON)
OPTION(ENABLE_SCENE3D            "Enable scene3d" ON)
OPTION(ENABLE_PHYSICS_2D         "Enable 2d physics" ON)
OPTION(ENABLE_PHYSICS_3D         "Enable 3d physics" OFF)
OPTION(ENABLE_RIVE_ANIMATION     "Enable rive animation" OFF)
OPTION(ENABLE_ECORE_WAYLAND2     "Enable ecore wayland2" OFF)

# Set up compiler definitions
IF(CMAKE_BUILD_TYPE MATCHES Debug)
  SET( ENABLE_DEBUG ON )
ENDIF()

IF( ENABLE_DEBUG )
  MESSAGE( STATUS "CMAKE_BUILD_TYPE: " Debug )
  ADD_DEFINITIONS( "-DDEBUG_ENABLED" )
  SET( ENABLE_EXPORTALL ON )
ELSE()
  MESSAGE( STATUS "CMAKE_BUILD_TYPE: " Release )
ENDIF()

IF( NOT ENABLE_PROFILE )
  IF( ANDROID )
    SET( ENABLE_PROFILE ANDROID )
  ELSE()
    SET( ENABLE_PROFILE UBUNTU )
  ENDIF()
ENDIF()

# from root/build/tizen, get back to root.
# set the variable only if it's not set yet. it allows to access build script
# from top-level directory
IF( NOT ROOT_SRC_DIR )
  SET(ROOT_SRC_DIR ${CMAKE_SOURCE_DIR}/../..)
ENDIF()
# Make sure the path is absolute
GET_FILENAME_COMPONENT(ROOT_SRC_DIR ${ROOT_SRC_DIR} ABSOLUTE)


# Test for profile and exit if something wrong
SET( VALID_PROFILES COMMON MOBILE WEARABLE TV IVI UBUNTU ANDROID WINDOWS MACOS )
LIST( FIND VALID_PROFILES ${ENABLE_PROFILE} RESULT )
IF( RESULT EQUAL -1 )
  MESSAGE( FATAL_ERROR "Invalid profile!" )
ENDIF()

# Defines profile specific variable
SET( ${ENABLE_PROFILE}_PROFILE 1 )

IF( ENABLE_PKG_CONFIGURE )
  FIND_PACKAGE( PkgConfig REQUIRED )

  PKG_CHECK_MODULES(DALICORE REQUIRED dali2-core)
  PKG_CHECK_MODULES(DALIADAPTOR REQUIRED dali2-adaptor)
  PKG_CHECK_MODULES(DALITOOLKIT REQUIRED dali2-toolkit)
  PKG_CHECK_MODULES(DALISCENE3D REQUIRED dali2-scene3d)
  PKG_CHECK_MODULES(DALIPHYSICS2D REQUIRED dali2-physics-2d)
  PKG_CHECK_MODULES(DALIPHYSICS3D REQUIRED dali2-physics-3d)
ENDIF()

ADD_DEFINITIONS(-DDALI_PROFILE_WINDOWS)

IF( WIN32 ) # WIN32 includes x64 as well according to the cmake doc.
  FIND_PACKAGE( dali-windows-dependencies REQUIRED )
  FIND_PACKAGE( dali2-core REQUIRED )
  FIND_PACKAGE( dali2-adaptor REQUIRED )
  FIND_PACKAGE( dali2-toolkit REQUIRED )
  FIND_PACKAGE( dali2-scene3d REQUIRED )
  FIND_PACKAGE( dali2-physics-2d REQUIRED )
  FIND_PACKAGE( dali2-physics-3d REQUIRED )
  FIND_PACKAGE( pthreads REQUIRED )
ENDIF()

SET( DALI_CFLAGS
  ${DALICORE_CFLAGS}
  ${DALIADAPTOR_CFLAGS}
  ${DALITOOLKIT_CFLAGS}
)

SET( DALI_LDFLAGS
    ${DALICORE_LDFLAGS}
    ${DALIADAPTOR_LDFLAGS}
    ${DALITOOLKIT_LDFLAGS}
)

ADD_DEFINITIONS(-D_USE_MATH_DEFINES)

SET(VCPKG_INCLUDE_DIR "${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include")

# set lowercase profile name
STRING( TOLOWER ${ENABLE_PROFILE} PROFILE_LCASE )


# Deployment folder should come from spec file or command line:
SET( PREFIX ${CMAKE_INSTALL_PREFIX})
SET( EXEC_PREFIX ${CMAKE_INSTALL_PREFIX})

# Set up the include dir
SET( INCLUDE_DIR $ENV{includedir} )
IF( NOT INCLUDE_DIR )
  SET( INCLUDE_DIR ${CMAKE_INSTALL_INCLUDEDIR} )
ENDIF()
IF( NOT INCLUDE_DIR )
  SET( INCLUDE_DIR ${PREFIX}/include )
ENDIF()

# Set up the lib dir
SET( LIB_DIR $ENV{libdir} )
IF( NOT LIB_DIR )
  SET( LIB_DIR ${CMAKE_INSTALL_LIBDIR} )
ENDIF()
IF( NOT LIB_DIR )
  SET( LIB_DIR ${PREFIX}/lib )
ENDIF()

# Set up the bin dir
SET( BIN_DIR $ENV{bindir} )
IF( NOT BIN_DIR )
  SET( BIN_DIR ${CMAKE_INSTALL_BINDIR} )
ENDIF()
IF( NOT BIN_DIR )
  SET( BIN_DIR ${PREFIX}/bin )
ENDIF()

# Set up compiler flags and warnings
IF( UNIX )
  ADD_COMPILE_OPTIONS( -Wall ${DALI_CFLAGS} )# -Wextra -Wno-unused-parameter )# -Wfloat-equal )
ELSEIF( WIN32 ) # WIN32 includes x64 as well according to the cmake doc.
  ADD_COMPILE_OPTIONS( /FIdali-windows-dependencies.h ) # Adds missing definitions.
  ADD_COMPILE_OPTIONS( /vmg ) # Avoids a 'reinterpret_cast' compile error while compiling signals and callbacks.
  ADD_COMPILE_OPTIONS( /wd4251 ) # Ignores warning C4251: "'identifier' : class 'type' needs to have dll-interface to be used by clients of class 'type2'"
ENDIF()

# from root/build/tizen, get back to root
SET(ROOT_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../)

# Make sure the path is absolute
GET_FILENAME_COMPONENT(ROOT_SRC_DIR ${ROOT_SRC_DIR} ABSOLUTE)

SET(dali_csharp_binder_dir ${CMAKE_CURRENT_SOURCE_DIR}/../../dali-csharp-binder)
INCLUDE( ${dali_csharp_binder_dir}/file.list )

# Include profile specific setup
INCLUDE( profiles/${PROFILE_LCASE}-profile.cmake )

IF( ENABLE_PKG_CONFIGURE )
  # Configure the pkg-config file
  # Requires the following variables to be setup:
  # @PREFIX@ @EXEC_PREFIX@ @DALI_VERSION@ @LIB_DIR@ @DEV_INCLUDE_PATH@
  SET( DEV_INCLUDE_PATH ${INCLUDE_DIR} )
  SET( CORE_PKG_CFG_FILE ${CMAKE_CURRENT_SOURCE_DIR}/dali2-csharp-binder.pc )
  CONFIGURE_FILE( ${CORE_PKG_CFG_FILE}.in ${CORE_PKG_CFG_FILE} @ONLY )
ENDIF()

INCLUDE_DIRECTORIES(
  ${ROOT_SRC_DIR}
  ${PROFILE_INCLUDE_DIRECTORIES}
  ${VCPKG_INCLUDE_DIR}
  ${CMAKE_INSTALL_PREFIX}/include
  ${INCLUDE_DIR}
)

ADD_LIBRARY(${name} SHARED ${SOURCES})

TARGET_LINK_LIBRARIES(${name}
                      ${DALI_LDFLAGS}
                      ${REQUIRED_LIBS})

SET_TARGET_PROPERTIES(${name}
  PROPERTIES
  VERSION ${${name}_VERSION}
  SOVERSION ${${name}_VERSION_MAJOR}
  CLEAN_DIRECT_OUPUT 1
)

IF( INSTALL_CMAKE_MODULES )
  # Install the pdb file.
  IF( ENABLE_DEBUG )
    SET(BIN_DIR "${BIN_DIR}/debug")
    SET(LIB_DIR "${LIB_DIR}/debug")
  ENDIF()

  # Install the library so file and symlinks
  INSTALL( TARGETS ${name}
    EXPORT ${name}-targets
    LIBRARY DESTINATION ${LIB_DIR}
    ARCHIVE DESTINATION ${LIB_DIR}
    RUNTIME DESTINATION ${BIN_DIR}
  )

  # Install the cmake modules.
  INSTALL(
    EXPORT ${name}-targets
    NAMESPACE ${name}::
    FILE ${name}-targets.cmake
    DESTINATION share/${name}
  )

  FILE(WRITE ${CMAKE_CURRENT_BINARY_DIR}/${name}-config.cmake "
    include(CMakeFindDependencyMacro)
    include(\${CMAKE_CURRENT_LIST_DIR}/${name}-targets.cmake)
  ")

  INSTALL(FILES ${CMAKE_CURRENT_BINARY_DIR}/${name}-config.cmake DESTINATION share/${name})

  # Install the pdb file.
  IF( ENABLE_DEBUG AND WIN32 )
    INSTALL( FILES ${CMAKE_CURRENT_BINARY_DIR}/Debug/${name}.pdb DESTINATION ${BIN_DIR} )
  ENDIF()
ELSE()
  # Install the library so file and symlinks
  INSTALL( TARGETS ${name} DESTINATION ${LIB_DIR} )
ENDIF()

# Install the pkg-config file
IF( ENABLE_PKG_CONFIGURE )
  INSTALL( FILES ${CORE_PKG_CFG_FILE} DESTINATION ${LIB_DIR}/pkgconfig )
ENDIF()

# Install headers
INSTALL( FILES ${dali_csharp_binder_header_files} DESTINATION ${INCLUDE_DIR}/dali-csharp-binder )

# Configuration Messages
MESSAGE( STATUS "Configuration:\n" )
MESSAGE( STATUS "Prefix:                        " ${PREFIX} )
MESSAGE( STATUS "Lib Dir:                       " ${LIB_DIR} )
MESSAGE( STATUS "Include Dir:                   " ${INCLUDE_DIR} )
MESSAGE( STATUS "Debug build:                   " ${ENABLE_DEBUG} )
MESSAGE( STATUS "Profile:                       " ${ENABLE_PROFILE} )
MESSAGE( STATUS "Export all symbols:            " ${ENABLE_EXPORTALL} )
MESSAGE( STATUS "Trace:                         " ${ENABLE_TRACE} )
MESSAGE( STATUS "Use pkg configure:             " ${ENABLE_PKG_CONFIGURE} )
MESSAGE( STATUS "Use 2d physics:                " ${ENABLE_PHYSICS_2D} )
MESSAGE( STATUS "Use 3d physics:                " ${ENABLE_PHYSICS_3D} )
MESSAGE( STATUS "Use scene 3d:                  " ${ENABLE_SCENE3D} )
MESSAGE( STATUS "CXXFLAGS:                      " ${CMAKE_CXX_FLAGS} )
MESSAGE( STATUS "LDFLAGS:                       " ${CMAKE_SHARED_LINKER_FLAGS_INIT}${CMAKE_SHARED_LINKER_FLAGS} )

IF( ENABLE_SCENE3D )
  ADD_SUBDIRECTORY( dali-scene3d )
ENDIF()

IF( ENABLE_PHYSICS_2D )
  ADD_SUBDIRECTORY( dali-physics-2d )
ENDIF()

IF( ENABLE_PHYSICS_3D )
  ADD_SUBDIRECTORY( dali-physics-3d )
ENDIF()
