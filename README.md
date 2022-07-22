T.O.C.
======

 1.   GBS Builds
 1.1. NON-SMACK Targets
 1.2. SMACK enabled Targets
 2.   Building for Ubuntu desktop
 2.1. Minimum Requirements
 2.2. Building the Repository



1. GBS Builds
=============

1.1. NON-SMACK Targets
----------------------

 gbs build -A [TARGET_ARCH]

1.2. SMACK enabled Targets
--------------------------

 gbs build -A [TARGET_ARCH] --define "%enable_dali_smack_rules 1"

1.3. MOBILE Profile
-------------------

 gbs build -A [TARGET_ARCH] --spec dali-toolkit-mobile.spec

2. Building for Ubuntu desktop
==============================

2.1. Requirements
------------------------

 - Ubuntu 14.04 or later
 - Environment created using dali_env script in dali-core repository
 - GCC version 6

DALi requires a compiler supporting C++11 features.
Ubuntu 16.04 is the first version to offer this by default (GCC v5.4.0).

GCC version 6 is recommended since it has fixes for issues in version 5
e.g. it avoids spurious 'defined but not used' warnings in header files.

2.2. Building the Repository
----------------------------

To build the repository enter the 'build/tizen' folder:

         $ cd dali-csharp-binder/build/tizen

Then run the following command to set up the build:

         $ cmake -DCMAKE_INSTALL_PREFIX=$DESKTOP_PREFIX .

If a Debug build is required, then add -DCMAKE_BUILD_TYPE=Debug

To build run:

         $ make install -j8

3. Building for Windows
=======================

Third party dependencies are built using vcpkg. Instructions on how to install vcpkg can be found in the
vcpkg-script folder in the windows-dependencies repository.

- Download the windows-dependencies repository from DaliHub

         $ git clone https://github.com/dalihub/windows-dependencies.git

- Read the windows-dependencies/vcpkg-script/Readme.md file for more instructions on how to build and install the third-party dependencies.

3.1 Building with CMake
-----------------------

  * Requirements
    It's required the version 3.12.2 of CMake and Visual Studio Community Edition

  * Define an environment variable to set the path to the VCPKG folder

    $ set VCPKG_FOLDER=C:/Users/username/Workspace/VCPKG_TOOL

  * Define an environment variable to set the path where DALi is going to be installed.

    $ set DALI_ENV_FOLDER=C:/Users/username/Workspace/dali-env

  * Execute the following commands to create the makefiles, build and install DALi.

    $ cmake -g Ninja . -DCMAKE_TOOLCHAIN_FILE=%VCPKG_FOLDER%/vcpkg/scripts/buildsystems/vcpkg.cmake -DCMAKE_INSTALL_PREFIX=%DALI_ENV_FOLDER%

    $ cmake --build . --target install
