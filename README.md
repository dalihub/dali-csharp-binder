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

 cd dali-csharp-binder/build/tizen

Then run the following commands:

 autoreconf --install
 ./configure --prefix=$DESKTOP_PREFIX
 make install -j8

