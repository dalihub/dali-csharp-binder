# This source builds the DALi 3 C# binder (dali3-csharp-binder). On Tizen
# 10.1 and 11, where NUI still loads the DALi 2.x names, it also produces the
# DALi 2.x package names (dali2-csharp-binder and its sub-packages) as alias
# packages: links to the dali3 files plus the Provides that 2.x binaries and
# specs depend on. On Tizen 10.0 and below the real DALi 2.x is installed from
# its own source, so the aliases must never be built there. --with/--without
# dali2_aliases overrides the default for a local build.
#
# Nested %if, not %elif: Tizen's rpm (4.14) predates %elif and silently
# skips such a branch.
%define legacy_tizen (0%{?tizen_version_major} < 10 || (0%{?tizen_version_major} == 10 && 0%{?tizen_version_minor} == 0))
%if %{legacy_tizen}
%bcond_with    dali2_aliases
%else
%bcond_without dali2_aliases
%endif
%if %{with dali2_aliases} && %{legacy_tizen}
%{error:Tizen <= 10.0 ships the real DALi 2.x; dali2 aliases must not be built there}
%endif

# rpm derives no Provides from a symbolic link, so the alias packages declare
# the ELF ones themselves. 64-bit ELF provides carry a suffix.
%if "%{__isa_bits}" == "64"
%define elf_suffix ()(64bit)
%else
%define elf_suffix %{nil}
%endif

# NOTES
# This spec file builds one DALi C# binder, used by every Tizen profile.

%bcond_with wayland

#please update nui_internal_version below, if you changed version-check.cpp
%define nui_internal_version nui550

Name: dali3-csharp-binder
Summary: The DALI Csharp Binder
Version: 3.0.0
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
%if "%{_vd_cfg_product_type}" != "AUDIO" && "%{_vd_cfg_product_type}" !="AV"
%define rive_animation_view 1
%endif

BuildRequires: pkgconfig(dali3-core)
BuildRequires: pkgconfig(dali3-adaptor)
BuildRequires: pkgconfig(dali3-toolkit)
BuildRequires: pkgconfig(dali3-scene3d)
BuildRequires: pkgconfig(dali3-physics-2d)
BuildRequires: pkgconfig(dali3-physics-3d)
BuildRequires: dali3-integration-devel
BuildRequires: dali3-adaptor-integration-devel
BuildRequires: dali3-toolkit-integration-devel
BuildRequires: dali3-scene3d-integration-devel
%if 0%{?rive_animation_view}
BuildRequires: pkgconfig(dali3-extension-rive-animation-view)
%endif
BuildRequires: pkgconfig(dali3-widget-viewer)
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

%if %{with dali2_aliases}
##############################
# DALi 2.x names (aliases)
##############################
%package -n dali2-csharp-binder
Summary: DALi 2.x library names for the DALI Csharp Binder
Group: uifw/graphic
Requires: %{name} = %{version}-%{release}
Requires: dali2-toolkit
Requires(post): /sbin/ldconfig
Requires(postun): /sbin/ldconfig
Provides: libdali2-csharp-binder.so.2%{elf_suffix}

%description -n dali2-csharp-binder
libdali2-csharp-binder.so, which NUI loads by name, and the rive-animation and widget-viewer binders as links to the dali3 libraries. Goes away once NUI has moved to the dali3 names.

%package -n dali2-csharp-binder-devel
Summary: DALi 2.x development names for the DALI Csharp Binder
Group: Development/Building
Requires: dali2-csharp-binder = %{version}-%{release}
Requires: %{name}-devel = %{version}-%{release}

%description -n dali2-csharp-binder-devel
include/dali-csharp-binder and the dali2-csharp-binder*.pc files as links to their dali3 counterparts.

%package -n dali2-csharp-binder-scene3d
Summary:    DALi 2.x name for the csharp binder scene3d
Group:      System/Libraries
Requires:   dali2-csharp-binder = %{version}-%{release}
Requires:   %{name}-scene3d = %{version}-%{release}
%description -n dali2-csharp-binder-scene3d
libdali2-csharp-binder-scene3d.so as a link to the dali3 library.

%package -n dali2-csharp-binder-physics2d
Summary:    DALi 2.x name for the csharp binder physics2d
Group:      System/Libraries
Requires:   dali2-csharp-binder = %{version}-%{release}
Requires:   %{name}-physics2d = %{version}-%{release}
%description -n dali2-csharp-binder-physics2d
libdali2-csharp-binder-physics-2d.so as a link to the dali3 library.

%package -n dali2-csharp-binder-physics3d
Summary:    DALi 2.x name for the csharp binder physics3d
Group:      System/Libraries
Requires:   dali2-csharp-binder = %{version}-%{release}
Requires:   %{name}-physics3d = %{version}-%{release}
%description -n dali2-csharp-binder-physics3d
libdali2-csharp-binder-physics-3d.so as a link to the dali3 library.

%package -n dali2-csharp-binder-toolkitdemo
Summary:    DALi 2.x name for the csharp binder toolkit demo
Group:      System/Libraries
Requires:   dali2-csharp-binder = %{version}-%{release}
Requires:   %{name}-toolkitdemo = %{version}-%{release}
%description -n dali2-csharp-binder-toolkitdemo
libdali2-csharp-binder-toolkit-demo.so as a link to the dali3 library.
%endif

##############################
# Preparation
##############################
%prep
%setup -q

##############################
# Build
##############################
%build
# Keep shadow diagnostics enabled independently of the build server policy.
export CFLAGS="${CFLAGS:-%optflags} -Werror=shadow"
export CXXFLAGS="${CXXFLAGS:-%optflags} -Werror=shadow"

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

cmake -DENABLE_PROFILE=TIZEN \
      -DDALI_LEGACY_ALIASES=%{?with_dali2_aliases:ON}%{!?with_dali2_aliases:OFF} \
      $cmake_flags .
make %{?jobs:-j%jobs}

##############################
# Installation
##############################
%install
rm -rf %{buildroot}
cd build/tizen
%make_install

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

%if %{with dali2_aliases}
%post -n dali2-csharp-binder
/sbin/ldconfig
exit 0

%postun -n dali2-csharp-binder
/sbin/ldconfig
exit 0
%endif

##############################
# Files in Binary Packages
##############################
# The Lua scriptlet runs up to the next section, so nothing but %files may
# follow it. Every earlier package installed include/dali-csharp-binder as a
# real directory; rpm cannot replace a directory with a link, so the alias
# package clears it before the transaction unpacks.
%if %{with dali2_aliases}
%pretrans -n dali2-csharp-binder-devel -p <lua>
local path = "%{_includedir}/dali-csharp-binder"
if posix.stat(path, "type") == "directory" then
  os.execute("rm -rf '" .. path .. "'")
end
%endif
%files
%manifest dali-csharp-binder.manifest
%license LICENSE
%license LICENSE.Zlib
%defattr(-,root,root,-)
%{_libdir}/libdali3-csharp-binder.so
%{_libdir}/libdali3-csharp-binder.so.3
%{_libdir}/libdali3-csharp-binder.so.3.0.0
%if "%{_vd_cfg_product_type}" != "AUDIO" && "%{_vd_cfg_product_type}" !="AV"
%{_libdir}/libdali3-csharp-binder-rive-animation.so*
%endif
%{_libdir}/libdali3-csharp-binder-widget-viewer-dali.so*

#################################################

%files scene3d
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali3-csharp-binder-scene3d.so*

#################################################

%files physics2d
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali3-csharp-binder-physics-2d.so*

#################################################

%files physics3d
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali3-csharp-binder-physics-3d.so*

#################################################

%files toolkitdemo
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali3-csharp-binder-toolkit-demo.so*

#################################################

%files devel
%defattr(-,root,root,-)
%dir %{_includedir}/dali3/dali-csharp-binder/
%{_includedir}/dali3/dali-csharp-binder/*
%{_libdir}/pkgconfig/%{name}.pc
%{_libdir}/pkgconfig/%{name}-physics-2d.pc
%{_libdir}/pkgconfig/%{name}-physics-3d.pc

%if %{with dali2_aliases}
%files -n dali2-csharp-binder
%manifest dali-csharp-binder.manifest
%license LICENSE
%license LICENSE.Zlib
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder.so
%{_libdir}/libdali2-csharp-binder.so.2
%if "%{_vd_cfg_product_type}" != "AUDIO" && "%{_vd_cfg_product_type}" !="AV"
%{_libdir}/libdali2-csharp-binder-rive-animation.so
%endif
%{_libdir}/libdali2-csharp-binder-widget-viewer-dali.so

%files -n dali2-csharp-binder-scene3d
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder-scene3d.so

%files -n dali2-csharp-binder-physics2d
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder-physics-2d.so

%files -n dali2-csharp-binder-physics3d
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder-physics-3d.so

%files -n dali2-csharp-binder-toolkitdemo
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder-toolkit-demo.so

%files -n dali2-csharp-binder-devel
%defattr(-,root,root,-)
%{_includedir}/dali-csharp-binder
%{_libdir}/pkgconfig/dali2-csharp-binder.pc
%{_libdir}/pkgconfig/dali2-csharp-binder-physics-2d.pc
%{_libdir}/pkgconfig/dali2-csharp-binder-physics-3d.pc
%endif
