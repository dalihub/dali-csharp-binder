# NOTES
# This spec file builds one DALi C# binder, used by every Tizen profile.

%bcond_with wayland

#please update nui_internal_version below, if you changed version-check.cpp
%define nui_internal_version nui550

Name: dali2-csharp-binder
Summary: The DALI Csharp Binder
Version: 2.5.41
Release: 1
Group: uifw/graphic
License: Apache-2.0 and Zlib
Source: %{name}-%{version}.tar.xz

Requires(post): /sbin/ldconfig
Requires(postun): /sbin/ldconfig

%define tizen_platform_config_supported 1
BuildRequires:  pkgconfig(libtzplatform-config)

BuildRequires: pkgconfig
BuildRequires: cmake
BuildRequires: gawk
BuildRequires: pkgconfig(dali2-core)
BuildRequires: pkgconfig(dali2-adaptor)
BuildRequires: pkgconfig(dali2-toolkit)
BuildRequires: pkgconfig(dali2-scene3d)
BuildRequires: pkgconfig(dali2-physics-2d)
BuildRequires: pkgconfig(dali2-physics-3d)
BuildRequires: dali2-integration-devel
BuildRequires: dali2-adaptor-integration-devel
BuildRequires: dali2-toolkit-integration-devel
BuildRequires: dali2-scene3d-integration-devel

%if "%{_vd_cfg_product_type}" != "AUDIO" && "%{_vd_cfg_product_type}" !="AV"
%define rive_animation_view 1
BuildRequires: pkgconfig(dali2-extension-rive-animation-view)
%endif


BuildRequires: pkgconfig(widget_viewer_dali)
BuildRequires: pkgconfig(libtbm)
%if 0%{?tizen_version_major} < 11
BuildRequires: pkgconfig(ecore-wl2)
%endif

# For ASAN test
%if "%{vd_asan}" == "1" || "%{asan}" == "1"
BuildRequires: asan-force-options
BuildRequires: asan-build-env
BuildRequires: libasan
%endif

# Absorbs the profile_mobile, profile_tv and profile_common packages an image
# may still have installed. The library they carried is in this package.
Provides:   %{name}-profile_common = %{version}-%{release}
Provides:   %{name}-profile_mobile = %{version}-%{release}
Provides:   %{name}-profile_tv = %{version}-%{release}
Obsoletes:  %{name}-profile_common < %{version}-%{release}
Obsoletes:  %{name}-profile_mobile < %{version}-%{release}
Obsoletes:  %{name}-profile_tv < %{version}-%{release}

%description
dali-csharp-binder

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
# Dali Physics 2D
##############################
%package physics2d
Summary:    build dali csharp binder physics2d
Group:      System/Libraries
Requires:   %{name} = %{version}-%{release}
%description physics2d
2D Physics for Dali

##############################
# Dali Physics 3D
##############################
%package physics3d
Summary:    build dali csharp binder physics3d
Group:      System/Libraries
Requires:   %{name} = %{version}-%{release}
%description physics3d
3D Physics for Dali

##############################
# Dali Toolkit Demo
##############################
%package toolkitdemo
Summary:    build dali csharp binder toolkit demo
Group:      System/Libraries
Requires:   %{name} = %{version}-%{release}
%description toolkitdemo
Toolkit Demo

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
PREFIX="${PREFIX}/usr"
CXXFLAGS="$CXXFLAGS  -Wall -g -Os -fPIC"
LDFLAGS="$LDFLAGS  -Wl,--rpath=%{_libdir} "

%if %{with wayland}
CFLAGS="$CFLAGS  -DWAYLAND"
CXXFLAGS="$CXXFLAGS  -DWAYLAND"
cmake_flags=" -DENABLE_WAYLAND=ON"

# Use this conditional when Tizen version is 5.x or greater
%if 0%{?tizen_version_major} >= 5
CXXFLAGS="$CXXFLAGS  -DOVER_TIZEN_VERSION_5"

# Need Ecore-Wayland2 when Tizen version is 5.x or greater, and less than 11.x
%if 0%{?tizen_version_major} < 11
CFLAGS="$CFLAGS  -DECORE_WL2 -DEFL_BETA_API_SUPPORT"
CXXFLAGS="$CXXFLAGS  -DECORE_WL2 -DEFL_BETA_API_SUPPORT"
cmake_flags="$cmake_flags  -DENABLE_ECORE_WAYLAND2=ON"
%endif
%endif

# Use this conditional when Tizen version is 7.x or greater
%if 0%{?tizen_version_major} >= 7
CXXFLAGS="$CXXFLAGS  -DOVER_TIZEN_VERSION_7"
%endif

%if 0%{?tizen_version_major} >= 11
CXXFLAGS="$CXXFLAGS  -DOVER_TIZEN_VERSION_11"
cmake_flags="$cmake_flags  -DENABLE_LEGACY_BINDER_BUILD=OFF"
%else
cmake_flags+=" -DENABLE_LEGACY_BINDER_BUILD=ON"
%endif

%endif

%if "%{vd_asan}" == "1" || "%{asan}" == "1"
CFLAGS+=" -fsanitize=address"
CXXFLAGS+=" -fsanitize=address"
LDFLAGS+=" -fsanitize=address"
%endif

%if 0%{?enable_debug}
cmake_flags="$cmake_flags  -DCMAKE_BUILD_TYPE=Debug"
%endif

%if 0%{?rive_animation_view}
cmake_flags="$cmake_flags  -DENABLE_RIVE_ANIMATION=ON"
%endif

# autogen
libtoolize --force
cd %{_builddir}/%{name}-%{version}/build/tizen

# DALI_DATA_RW_DIR="%{dali_data_rw_dir}" ; export DALI_DATA_RW_DIR
# DALI_DATA_RO_DIR="%{dali_data_ro_dir}"  ; export DALI_DATA_RO_DIR
%if 0%{?tizen_platform_config_supported}
TIZEN_PLATFORM_CONFIG_SUPPORTED="%{tizen_platform_config_supported}" ; export TIZEN_PLATFORM_CONFIG_SUPPORTED
%endif

cmake_flags="$cmake_flags  -DCMAKE_INSTALL_PREFIX=$PREFIX"
cmake_flags="$cmake_flags  -DCMAKE_INSTALL_LIBDIR=%{_libdir}"
cmake_flags="$cmake_flags  -DCMAKE_INSTALL_INCLUDEDIR=%{_includedir}"
cmake_flags="$cmake_flags  -DENABLE_TIZEN_MAJOR_VERSION=%{tizen_version_major}"
cmake_flags="$cmake_flags  -DENABLE_SCENE3D=ON"
cmake_flags="$cmake_flags  -DENABLE_PHYSICS_2D=ON"
cmake_flags="$cmake_flags  -DENABLE_PHYSICS_3D=ON"
cmake_flags="$cmake_flags  -DENABLE_WIDGET_VIEWER_DALI=ON"
cmake_flags="$cmake_flags  -DENABLE_TOOLKIT_DEMO=ON"


# Set up the build via Cmake
#######################################################################

mkdir -p build
(cd build || exit

cmake -DENABLE_PROFILE=TIZEN $cmake_flags ..

# Build.
make %{?jobs:-j%jobs}
)

##############################
# Installation
##############################
%install
rm -rf %{buildroot}

cd %{_builddir}/%{name}-%{version}/build/tizen

(cd build || exit
%make_install
)

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
# Files in Binary Packages
##############################
%files
%manifest dali-csharp-binder.manifest
%license LICENSE
%license LICENSE.Zlib
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder.so
%{_libdir}/libdali2-csharp-binder.so.2
%{_libdir}/libdali2-csharp-binder.so.2.0.0
%if "%{_vd_cfg_product_type}" != "AUDIO" && "%{_vd_cfg_product_type}" !="AV"
%{_libdir}/libdali2-csharp-binder-rive-animation.so*
%endif
%{_libdir}/libdali2-csharp-binder-widget-viewer-dali.so*

#################################################

%files scene3d
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder-scene3d.so*

#################################################

%files physics2d
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder-physics-2d.so*

#################################################

%files physics3d
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder-physics-3d.so*

#################################################

%files toolkitdemo
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder-toolkit-demo.so*

#################################################

%files devel
%defattr(-,root,root,-)
%dir %{_includedir}/dali-csharp-binder/
%{_includedir}/dali-csharp-binder/*
%{_libdir}/pkgconfig/%{name}.pc
%{_libdir}/pkgconfig/%{name}-physics-2d.pc
%{_libdir}/pkgconfig/%{name}-physics-3d.pc
