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

Name: dali-csharp-binder-vk
Summary: The DALI Csharp Binder
Version: 1.3.33
Release: 1
Group: uifw/graphic
License: Apache-2.0 and BSD-3-Clause and MIT
Source: %{name}-%{version}.tar.xz

Requires(post): /sbin/ldconfig
Requires(postun): /sbin/ldconfig

#need libtzplatform-config for directory if tizen version is 3.x

%if 0%{?tizen_version_major} >= 3
%define tizen_platform_config_supported 1
BuildRequires:  pkgconfig(libtzplatform-config)
%endif

%if 0%{?tizen_version_major} < 4
%define disable_cxx03_build 1
%endif

# Get the profile from tizen_profile_name if tizen version is 2.x and tizen_profile_name exists.

%if "%{tizen_version_major}" == "2" && 0%{?tizen_profile_name:1}
%define profile %{tizen_profile_name}
%endif

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
BuildRequires:  pkgconfig(capi-appfw-watch-application)
BuildRequires:  pkgconfig(appcore-watch)
BuildRequires:  pkgconfig(screen_connector_provider)
%endif

BuildRequires: pkgconfig
BuildRequires: pkgconfig(dali-core-vk)
BuildRequires: pkgconfig(dali-adaptor-vk)
BuildRequires: pkgconfig(dali-toolkit-vk)
BuildRequires: pkgconfig(widget_viewer_dali)


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

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
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

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
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

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
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

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
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

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
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
# Preparation
##############################
%prep
%setup -q

#Use TZ_PATH when tizen version is 3.x or greater

%if 0%{?tizen_version_major} >= 3
%define dali_data_rw_dir         %TZ_SYS_RO_SHARE/dali/
%define dali_data_ro_dir         %TZ_SYS_RO_SHARE/dali/
%else
%define dali_data_rw_dir         /usr/share/dali/
%define dali_data_ro_dir         /usr/share/dali/
%endif


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
configure_flags="--enable-wayland"

# Need Ecore-Wayland2 when Tizen version is 5.x or greater
%if 0%{?tizen_version_major} >= 5
CFLAGS+=" -DECORE_WL2 -DEFL_BETA_API_SUPPORT"
CXXFLAGS+=" -DECORE_WL2 -DEFL_BETA_API_SUPPORT"
configure_flags+=" --enable-ecore-wayland2"
%endif
%endif

# autogen
libtoolize --force
cd %{_builddir}/%{name}-%{version}/build/tizen
autoreconf --install

DALI_DATA_RW_DIR="%{dali_data_rw_dir}" ; export DALI_DATA_RW_DIR
DALI_DATA_RO_DIR="%{dali_data_ro_dir}"  ; export DALI_DATA_RO_DIR
%if 0%{?tizen_platform_config_supported}
TIZEN_PLATFORM_CONFIG_SUPPORTED="%{tizen_platform_config_supported}" ; export TIZEN_PLATFORM_CONFIG_SUPPORTED
%endif

# added for key grab binding only for tizen
# Do not merge this on tizen branch!

# Set up the build via configure.
#######################################################################
# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%configure --prefix=$PREFIX --enable-profile=MOBILE \
           --enable-tizen-major-version=%{tizen_version_major} \
%if 0%{?enable_debug}
           --enable-debug \
%endif
           $configure_flags --libdir=%{_libdir}

# Build.
make %{?jobs:-j%jobs}

pushd %{_builddir}/%{name}-%{version}/build/tizen
%make_install DALI_DATA_RW_DIR="%{dali_data_rw_dir}" DALI_DATA_RO_DIR="%{dali_data_ro_dir}"
popd

pushd %{buildroot}%{_libdir}
for FILE in libdali-csharp-binder*.so*; do mv "$FILE" "%{_builddir}/%{name}-%{version}/build/tizen/$FILE.mobile"; done
mv pkgconfig/dali-csharp-binder*pc %{_builddir}/%{name}-%{version}/build/tizen/
popd

make clean
%endif

#######################################################################
# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%configure --prefix=$PREFIX --enable-profile=TV \
           --enable-tizen-major-version=%{tizen_version_major} \
%if 0%{?enable_debug}
           --enable-debug \
%endif
           $configure_flags --libdir=%{_libdir}

# Build.
make %{?jobs:-j%jobs}

pushd %{_builddir}/%{name}-%{version}/build/tizen
%make_install DALI_DATA_RW_DIR="%{dali_data_rw_dir}" DALI_DATA_RO_DIR="%{dali_data_ro_dir}"
popd

pushd %{buildroot}%{_libdir}
for FILE in libdali-csharp-binder*.so*; do mv "$FILE" "%{_builddir}/%{name}-%{version}/build/tizen/$FILE.tv"; done
mv pkgconfig/dali-csharp-binder*pc %{_builddir}/%{name}-%{version}/build/tizen/
popd

make clean
%endif

#######################################################################
# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%configure --prefix=$PREFIX --enable-profile=WEARABLE \
           --enable-tizen-major-version=%{tizen_version_major} \
%if 0%{?enable_debug}
           --enable-debug \
%endif
           $configure_flags --libdir=%{_libdir}

# Build.
make %{?jobs:-j%jobs}

pushd %{_builddir}/%{name}-%{version}/build/tizen
%make_install DALI_DATA_RW_DIR="%{dali_data_rw_dir}" DALI_DATA_RO_DIR="%{dali_data_ro_dir}"
popd

pushd %{buildroot}%{_libdir}
for FILE in libdali-csharp-binder*.so*; do mv "$FILE" "%{_builddir}/%{name}-%{version}/build/tizen/$FILE.wearable"; done
mv pkgconfig/dali-csharp-binder*pc %{_builddir}/%{name}-%{version}/build/tizen/
popd

make clean
%endif

#######################################################################
# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"
%configure --prefix=$PREFIX --enable-profile=IVI \
           --enable-tizen-major-version=%{tizen_version_major} \
%if 0%{?enable_debug}
           --enable-debug \
%endif
           $configure_flags --libdir=%{_libdir}

# Build.
make %{?jobs:-j%jobs}

pushd %{_builddir}/%{name}-%{version}/build/tizen
%make_install DALI_DATA_RW_DIR="%{dali_data_rw_dir}" DALI_DATA_RO_DIR="%{dali_data_ro_dir}"
popd

pushd %{buildroot}%{_libdir}
for FILE in libdali-csharp-binder*.so*; do mv "$FILE" "%{_builddir}/%{name}-%{version}/build/tizen/$FILE.ivi"; done
mv pkgconfig/dali-csharp-binder*pc %{_builddir}/%{name}-%{version}/build/tizen/
popd

make clean
%endif

#######################################################################
# common
# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if common ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%configure --prefix=$PREFIX --enable-profile=COMMON \
           --enable-tizen-major-version=%{tizen_version_major} \
%if 0%{?enable_debug}
           --enable-debug \
%endif
           $configure_flags --libdir=%{_libdir}

# Build.
make %{?jobs:-j%jobs}

pushd %{_builddir}/%{name}-%{version}/build/tizen
%make_install DALI_DATA_RW_DIR="%{dali_data_rw_dir}" DALI_DATA_RO_DIR="%{dali_data_ro_dir}"
popd

pushd %{buildroot}%{_libdir}
for FILE in libdali-csharp-binder*.so*; do mv "$FILE" "%{_builddir}/%{name}-%{version}/build/tizen/$FILE"; done
mv pkgconfig/dali-csharp-binder*pc %{_builddir}/%{name}-%{version}/build/tizen/
popd

make clean
%endif

##############################
# Installation
##############################
%install
rm -rf %{buildroot}

pushd %{_builddir}/%{name}-%{version}/build/tizen
%make_install DALI_DATA_RW_DIR="%{dali_data_rw_dir}" DALI_DATA_RO_DIR="%{dali_data_ro_dir}"


# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# !unified && (wearable || tv || ivi || mobile)
%if "%{?profile}" == "wearable" || "%{?profile}" == "tv" || "%{?profile}" == "ivi" || "%{?profile}" == "mobile"
rm -rf %{buildroot}%{_libdir}/libdali-csharp-binder*.so*
%endif

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# wearable || tv || ivi || mobile || unified
%if "%{?profile}" != "common"
for FILE in libdali-*.so*; do mv "$FILE" "%{buildroot}%{_libdir}/$FILE"; done
mv dali-csharp-binder*.pc %{buildroot}%{_libdir}/pkgconfig/
%endif
popd

################################################
#rename
###############################################
pushd %{buildroot}%{_libdir}

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if common ||"undefined"
#%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
rm -rf libdali-csharp-binder*.so
ln -s libdali-csharp-binder-vk.so.0.0.0 libdali-csharp-binder-vk.so
#%endif

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
rm -rf libdali-csharp-binder*.so.wearable
ln -s libdali-csharp-binder-vk.so.0.0.*.wearable libdali-csharp-binder-vk.so.wearable
%endif

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
rm -rf libdali-csharp-binder*.so.tv
ln -s libdali-csharp-binder-vk.so.0.0.*.tv libdali-csharp-binder-vk.so.tv
%endif

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"
rm -rf libdali-csharp-binder*.so.ivi
ln -s libdali-csharp-binder-vk.so.0.0.*.ivi libdali-csharp-binder-vk.so.ivi
%endif

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
rm -rf libdali-csharp-binder*.so.mobile
ln -s libdali-csharp-binder-vk.so.0.0.*.mobile libdali-csharp-binder-vk.so.mobile
%endif
popd

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

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%post profile_mobile
pushd %{_libdir}
for FILE in libdali-csharp-binder-vk.so*.mobile; do ln -sf "$FILE" "${FILE%.mobile}"; done
popd
/sbin/ldconfig
exit 0

%postun profile_mobile
/sbin/ldconfig
exit 0
%endif

##############################

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%post profile_tv
pushd %{_libdir}
for FILE in libdali-csharp-binder-vk.so*.tv; do ln -sf "$FILE" "${FILE%.tv}"; done
popd
/sbin/ldconfig
exit 0

%postun profile_tv
/sbin/ldconfig
exit 0
%endif

##############################

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%post profile_wearable
pushd %{_libdir}
for FILE in libdali-csharp-binder-vk.so*.wearable; do ln -sf "$FILE" "${FILE%.wearable}"; done
popd
/sbin/ldconfig
exit 0

%postun profile_wearable
/sbin/ldconfig
exit 0
%endif

##############################

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"
%post profile_ivi
pushd %{_libdir}
for FILE in libdali-csharp-binder-vk.so*.ivi; do ln -sf "$FILE" "${FILE%.ivi}"; done
popd
/sbin/ldconfig
exit 0

%postun profile_ivi
/sbin/ldconfig
exit 0
%endif


##############################
# Files in Binary Packages
##############################
%files
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%defattr(-,app,app,-)
%license LICENSE

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if common ||"undefined"
#%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%defattr(-,root,root,-)
%{_libdir}/libdali-csharp-binder-vk.so*
%exclude %{_libdir}/libdali-csharp-binder*.so*.mobile
%exclude %{_libdir}/libdali-csharp-binder*.so*.wearable
%exclude %{_libdir}/libdali-csharp-binder*.so*.tv
%exclude %{_libdir}/libdali-csharp-binder*.so*.ivi
#%endif

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if common ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%files profile_common
# default .so files are housed in the main pkg.
%endif

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%files profile_mobile
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali-csharp-binder-vk.so.*mobile
%endif

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%files profile_tv
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali-csharp-binder-vk.so.*tv
%endif

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%files profile_wearable
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali-csharp-binder-vk.so.*wearable
%endif

# This is for backward-compatibility. This does not deteriorate 4.0 Configurability
# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"
%files profile_ivi
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali-csharp-binder-vk.so.*ivi
%endif

%files devel
%defattr(-,root,root,-)
%dir %{_includedir}/%{name}/
%{_includedir}/%{name}/*
%{_libdir}/pkgconfig/%{name}.pc

