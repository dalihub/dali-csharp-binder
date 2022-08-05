# NOTES
# This spec file is used to build DALi C# binder for different Tizen Profiles
# Current profiles are:  Mobile, TV, Wearable, Common
#
# The profile variable is defined outside of the spec file in a build.conf file.
# It will contain the profile and whether or not to build with X11 or Wayland
#
# gbs will try to download the build.conf for the platform automatically from the repo location when
# performing a gbs build ( use gbs build -v to see it download location) E.g.
# http://download.tizen.org/snapshots/tizen/tv/tizen-tv/repos/arm-wayland/packages/repodata/xxxx-build.conf.gz

# This if statement is for backward compatibility with GBM/Obsolete build systems
%if "%{?profile}" != "wearable" && "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%global __provides_exclude_from ^.*\\.(wearable|mobile|tv|ivi|common)$
%endif

%bcond_with wayland

#please update nui_internal_version below, if you changed version-check.cpp
%define nui_internal_version nui550

Name: dali2-csharp-binder
Summary: The DALI Csharp Binder
Version: 2.1.34
Release: 1
Group: uifw/graphic
License: Apache-2.0 and BSD-3-Clause and MIT
Source: %{name}-%{version}.tar.xz

Requires(post): /sbin/ldconfig
Requires(postun): /sbin/ldconfig

%define tizen_platform_config_supported 1
BuildRequires:  pkgconfig(libtzplatform-config)

# If the profile is selected, the line below is repquired.
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
BuildRequires:  pkgconfig(capi-appfw-watch-application)
BuildRequires:  pkgconfig(appcore-watch)
BuildRequires:  pkgconfig(screen_connector_provider)
%endif

BuildRequires: pkgconfig
BuildRequires: cmake
BuildRequires: gawk
BuildRequires: pkgconfig(dali2-core)
BuildRequires: pkgconfig(dali2-adaptor)
BuildRequires: pkgconfig(dali2-toolkit)
BuildRequires: pkgconfig(dali2-scene3d)
%if "%{_vd_cfg_product_type}" != "AUDIO" && "%{_vd_cfg_product_type}" !="AV"
%define rive_animation_view 1
BuildRequires: pkgconfig(dali2-extension-rive-animation-view)
%endif


BuildRequires: pkgconfig(widget_viewer_dali)
BuildRequires: pkgconfig(watch_viewer_dali)
BuildRequires: pkgconfig(watch-holder-base)

%if 0%{?tizen_version_major} >= 5
BuildRequires: pkgconfig(ecore-wl2)
%else
BuildRequires:  pkgconfig(ecore-wayland)
%endif

# for multiprofile
Requires:   %{name}-compat = %{version}-%{release}
Recommends: %{name}-profile_common = %{version}-%{release}

%description
dali-csharp-binder

###########################################
# Dali csharp binder for profiles
###########################################

# If the profile is selected, the line below is repquired.
# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%package profile_mobile
Summary:        The DALi Tizen csharp binder for mobile
Provides:       %{name}-compat = %{version}-%{release}
Conflicts:      %{name}-profile_tv
Conflicts:      %{name}-profile_wearable
Conflicts:      %{name}-profile_ivi
Conflicts:      %{name}-profile_common
%description profile_mobile
The DALi Tizen csharp binder for mobile.
%endif

# If the profile is selected, the line below is repquired.
# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%package profile_tv
Summary:        The DALi Tizen csharp binder for tv
Provides:       %{name}-compat = %{version}-%{release}
Conflicts:      %{name}-profile_mobile
Conflicts:      %{name}-profile_wearable
Conflicts:      %{name}-profile_ivi
Conflicts:      %{name}-profile_common
%description profile_tv
The DALi Tizen csharp binder for tv.
%endif

# If the profile is selected, the line below is repquired.
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%package profile_wearable
Summary:        The DALi Tizen csharp binder for wearable
Provides:       %{name}-compat = %{version}-%{release}
Conflicts:      %{name}-profile_mobile
Conflicts:      %{name}-profile_tv
Conflicts:      %{name}-profile_ivi
Conflicts:      %{name}-profile_common
%description profile_wearable
The DALi Tizen csharp binder for wearable.
%endif

# If the profile is selected, the line below is repquired.
# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"
%package profile_ivi
Summary:        The DALi Tizen csharp binder for ivi
Provides:       %{name}-compat = %{version}-%{release}
Conflicts:      %{name}-profile_mobile
Conflicts:      %{name}-profile_wearable
Conflicts:      %{name}-profile_tv
Conflicts:      %{name}-profile_common
%description profile_ivi
The DALi Tizen csharp binder for ivi.
%endif

# If the profile is selected, the line below is repquired.
# if common ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
# Currently Tizen Common we use does not have wayland extensions like xdg-shell
%package profile_common
%define tizen_2_2_compatibility 0
Summary:        The DALi Tizen csharp binder for common
Provides:       %{name}-compat = %{version}-%{release}
Conflicts:      %{name}-profile_mobile
Conflicts:      %{name}-profile_wearable
Conflicts:      %{name}-profile_tv
Conflicts:      %{name}-profile_ivi
%description profile_common
The DALi Tizen csharp binder for common.
%endif


##############################
# devel
##############################
%package devel
Summary: build dali csharp binder
Group: Development/Building
Requires: %{name} = %{version}-%{release}

%description devel
This package includes developer files common to all packages.


##############################
# Dali Scene3D
##############################
%package scene3d
Summary:    build dali csharp binder scene3d
Group:      System/Libraries
Requires:   %{name} = %{version}-%{release}
%description scene3d
Scene 3D for Dali


##############################
# Preparation
##############################
%prep
%setup -q

# %define dali_data_rw_dir         %TZ_SYS_RO_SHARE/dali/
# %define dali_data_ro_dir         %TZ_SYS_RO_SHARE/dali/

##############################
# Build
##############################
%build
PREFIX+="/usr"
CXXFLAGS+=" -Wall -g -Os -fPIC"
LDFLAGS+=" -Wl,--rpath=%{_libdir} "

%if %{with wayland}
CFLAGS+=" -DWAYLAND"
CXXFLAGS+=" -DWAYLAND"
cmake_flags=" -DENABLE_WAYLAND=ON"

# Use this conditional when Tizen version is 5.x or greater
%if 0%{?tizen_version_major} >= 5
CXXFLAGS+=" -DOVER_TIZEN_VERSION_5"

# Need Ecore-Wayland2 when Tizen version is 5.x or greater
CFLAGS+=" -DECORE_WL2 -DEFL_BETA_API_SUPPORT"
CXXFLAGS+=" -DECORE_WL2 -DEFL_BETA_API_SUPPORT"
cmake_flags+=" -DENABLE_ECORE_WAYLAND2=ON"
%endif

# Use this conditional when Tizen version is 7.x or greater
%if 0%{?tizen_version_major} >= 7
CXXFLAGS+=" -DOVER_TIZEN_VERSION_7"
%endif

%endif

%if 0%{?enable_debug}
cmake_flags+=" -DCMAKE_BUILD_TYPE=Debug"
%endif

%if 0%{?rive_animation_view}
cmake_flags+=" -DENABLE_RIVE_ANIMATION=ON"
%endif

# autogen
libtoolize --force
cd %{_builddir}/%{name}-%{version}/build/tizen

# DALI_DATA_RW_DIR="%{dali_data_rw_dir}" ; export DALI_DATA_RW_DIR
# DALI_DATA_RO_DIR="%{dali_data_ro_dir}"  ; export DALI_DATA_RO_DIR
%if 0%{?tizen_platform_config_supported}
TIZEN_PLATFORM_CONFIG_SUPPORTED="%{tizen_platform_config_supported}" ; export TIZEN_PLATFORM_CONFIG_SUPPORTED
%endif

cmake_flags+=" -DCMAKE_INSTALL_PREFIX=$PREFIX"
cmake_flags+=" -DCMAKE_INSTALL_LIBDIR=%{_libdir}"
cmake_flags+=" -DCMAKE_INSTALL_INCLUDEDIR=%{_includedir}"
cmake_flags+=" -DENABLE_TIZEN_MAJOR_VERSION=%{tizen_version_major}"
cmake_flags+=" -DENABLE_SCENE3D=ON"

# Set up the build via Cmake
#######################################################################
# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"

mkdir -p mobile
pushd mobile

cmake -DENABLE_PROFILE=MOBILE $cmake_flags ..

# Build.
make %{?jobs:-j%jobs}
popd

%endif

#######################################################################
# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"

mkdir -p tv
pushd tv

cmake -DENABLE_PROFILE=TV $cmake_flags ..

# Build.
make %{?jobs:-j%jobs}
popd

%endif

#######################################################################
# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"

mkdir -p wearable
pushd wearable

cmake -DENABLE_PROFILE=WEARABLE $cmake_flags ..

# Build.
make %{?jobs:-j%jobs}
popd

%endif

#######################################################################
# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"

mkdir -p ivi
pushd ivi

cmake -DENABLE_PROFILE=IVI $cmake_flags ..

# Build.
make %{?jobs:-j%jobs}
popd

%endif

#######################################################################
# common
# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if common ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"

mkdir -p common
pushd common

cmake -DENABLE_PROFILE=COMMON $cmake_flags ..

# Build.
make %{?jobs:-j%jobs}
popd

%endif

##############################
# Installation
##############################
%install
rm -rf %{buildroot}

pushd %{_builddir}/%{name}-%{version}/build/tizen

# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
pushd mobile
%make_install
%if "%{?profile}" != "mobile"
pushd  %{buildroot}%{_libdir}
cp libdali2-csharp-binder.so.*.*.* libdali2-csharp-binder.so.mobile # If we're only building this profile, then there's no need to copy the lib
popd
make clean # So that we can gather symbol/size information for only one profile if we're building all profiles
%endif
popd
%endif

# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
pushd tv
%make_install
%if "%{?profile}" != "tv"
pushd  %{buildroot}%{_libdir}
cp libdali2-csharp-binder.so.*.*.* libdali2-csharp-binder.so.tv # If we're only building this profile, then there's no need to copy the lib
popd
make clean # So that we can gather symbol/size information for only one profile if we're building all profiles
%endif
popd
%endif

# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
pushd wearable
%make_install
%if "%{?profile}" != "wearable"
pushd  %{buildroot}%{_libdir}
cp libdali2-csharp-binder.so.*.*.* libdali2-csharp-binder.so.wearable # If we're only building this profile, then there's no need to copy the lib
popd
make clean # So that we can gather symbol/size information for only one profile if we're building all profiles
%endif
popd
%endif

# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"
pushd ivi
%make_install
%if "%{?profile}" != "ivi"
pushd  %{buildroot}%{_libdir}
cp libdali2-csharp-binder.so.*.*.* libdali2-csharp-binder.so.ivi # If we're only building this profile, then there's no need to copy the lib
popd
make clean # So that we can gather symbol/size information for only one profile if we're building all profiles
%endif
popd
%endif

# if common ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
pushd common
%make_install
# No clean so we can gather symbol/size information for the common profile
popd
%endif

##############################
# Upgrade order:
# 1 - Pre Install new package
# 2 - Install new package
# 3 - Post install new package
# 4 - Pre uninstall old package
# 5 - Remove files not overwritten by new package
# 6 - Post uninstall old package
##############################

%pre
exit 0

##############################
#  Post Install new package
##############################
%post
pushd %{_libdir}
for i in mobile tv wearable ivi; do [[ -f libdali2-csharp-binder.so.$i ]] && ln -sf libdali2-csharp-binder.so.$i libdali2-csharp-binder.so.2.0.0; done
popd
/sbin/ldconfig
exit 0

##############################
#  Pre Uninstall old package
##############################
%preun
exit 0

##############################
#  Post Uninstall old package
##############################
%postun
/sbin/ldconfig
exit 0

##############################
# Mobile Profile Commands
# No need to create a symbolic link on install required if only building this profile
# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%post profile_mobile
%if "%{?profile}" != "mobile"
pushd %{_libdir}
ln -sf libdali2-csharp-binder.so.mobile libdali2-csharp-binder.so.2.0.0
popd
%endif
/sbin/ldconfig
exit 0

%postun profile_mobile
/sbin/ldconfig
exit 0
%endif

##############################
# TV Profile Commands
# No need to create a symbolic link on install required if only building this profile
# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%post profile_tv
%if "%{?profile}" != "tv"
pushd %{_libdir}
ln -sf libdali2-csharp-binder.so.tv libdali2-csharp-binder.so.2.0.0
popd
%endif
/sbin/ldconfig
exit 0

%postun profile_tv
/sbin/ldconfig
exit 0
%endif

##############################
# Wearable Profile Commands
# No need to create a symbolic link on install required if only building this profile
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%post profile_wearable
%if "%{?profile}" != "wearable"
pushd %{_libdir}
ln -sf libdali2-csharp-binder.so.wearable libdali2-csharp-binder.so.2.0.0
popd
%endif
/sbin/ldconfig
exit 0

%postun profile_wearable
/sbin/ldconfig
exit 0
%endif

##############################
# IVI Profile Commands
# No need to create a symbolic link on install required if only building this profile
# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"
%post profile_ivi
%if "%{?profile}" != "ivi"
pushd %{_libdir}
ln -sf libdali2-csharp-binder.so.ivi libdali2-csharp-binder.so.2.0.0
popd
%endif
/sbin/ldconfig
exit 0

%postun profile_ivi
/sbin/ldconfig
exit 0
%endif

##############################
# Common Profile Commands
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%post profile_common
/sbin/ldconfig
exit 0

%postun profile_common
/sbin/ldconfig
exit 0
%endif

##############################
# Files in Binary Packages
##############################
%files
%manifest dali-csharp-binder.manifest
%license LICENSE
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder.so
%{_libdir}/libdali2-csharp-binder.so.2
%{_libdir}/libdali2-csharp-binder.so.2.0.0

#################################################

%files scene3d
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder-scene3d.so*

#################################################

# If the profile is selected, the line below is repquired.
# if common ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%files profile_common
%manifest dali-csharp-binder.manifest
# default .so files are housed in the main pkg.
%endif

# If the profile is selected, the line below is repquired.
# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%files profile_mobile
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%if "%{?profile}" != "mobile"
%{_libdir}/libdali2-csharp-binder.so.*mobile
%endif
%endif

# If the profile is selected, the line below is repquired.
# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%files profile_tv
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%if "%{?profile}" != "tv"
%{_libdir}/libdali2-csharp-binder.so.*tv
%endif
%endif

# If the profile is selected, the line below is repquired.
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%files profile_wearable
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%if "%{?profile}" != "wearable"
%{_libdir}/libdali2-csharp-binder.so.*wearable
%endif
%endif

# If the profile is selected, the line below is repquired.
# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"
%files profile_ivi
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%if "%{?profile}" != "ivi"
%{_libdir}/libdali2-csharp-binder.so.*ivi
%endif
%endif

%files devel
%defattr(-,root,root,-)
%dir %{_includedir}/dali-csharp-binder/
%{_includedir}/dali-csharp-binder/*
%{_libdir}/pkgconfig/%{name}.pc

