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
Version: 2.1.19
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
BuildRequires: pkgconfig(dali2-core)
BuildRequires: pkgconfig(dali2-adaptor)
BuildRequires: pkgconfig(dali2-toolkit)
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
# Preparation
##############################
%prep
%setup -q

%define dali_data_rw_dir         %TZ_SYS_RO_SHARE/dali/
%define dali_data_ro_dir         %TZ_SYS_RO_SHARE/dali/

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
# If the profile is selected, the line below is repquired.
# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%configure --prefix=$PREFIX --enable-profile=MOBILE \
           --enable-tizen-major-version=%{tizen_version_major} \
%if 0%{?enable_debug}
           --enable-debug \
%endif
%if 0%{?rive_animation_view}
           --enable-rive-animation-view \
%endif
           $configure_flags --libdir=%{_libdir}

# Build.
make %{?jobs:-j%jobs}

pushd %{_builddir}/%{name}-%{version}/build/tizen
%make_install DALI_DATA_RW_DIR="%{dali_data_rw_dir}" DALI_DATA_RO_DIR="%{dali_data_ro_dir}"
popd

pushd %{buildroot}%{_libdir}
for FILE in libdali2-csharp-binder*.so*; do mv "$FILE" "%{_builddir}/%{name}-%{version}/build/tizen/$FILE.mobile"; done
mv pkgconfig/dali2-csharp-binder*pc %{_builddir}/%{name}-%{version}/build/tizen/
popd

%if "%{?profile}" != "mobile"
make clean
%endif

%endif

#######################################################################
# If the profile is selected, the line below is repquired.
# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%configure --prefix=$PREFIX --enable-profile=TV \
           --enable-tizen-major-version=%{tizen_version_major} \
%if 0%{?enable_debug}
           --enable-debug \
%endif
%if 0%{?rive_animation_view}
           --enable-rive-animation-view \
%endif
           $configure_flags --libdir=%{_libdir}

# Build.
make %{?jobs:-j%jobs}

pushd %{_builddir}/%{name}-%{version}/build/tizen
%make_install DALI_DATA_RW_DIR="%{dali_data_rw_dir}" DALI_DATA_RO_DIR="%{dali_data_ro_dir}"
popd

pushd %{buildroot}%{_libdir}
for FILE in libdali2-csharp-binder*.so*; do mv "$FILE" "%{_builddir}/%{name}-%{version}/build/tizen/$FILE.tv"; done
mv pkgconfig/dali2-csharp-binder*pc %{_builddir}/%{name}-%{version}/build/tizen/
popd

%if "%{?profile}" != "tv"
make clean
%endif

%endif

#######################################################################
# If the profile is selected, the line below is repquired.
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%configure --prefix=$PREFIX --enable-profile=WEARABLE \
           --enable-tizen-major-version=%{tizen_version_major} \
%if 0%{?enable_debug}
           --enable-debug \
%endif
%if 0%{?rive_animation_view}
           --enable-rive-animation-view \
%endif
           $configure_flags --libdir=%{_libdir}

# Build.
make %{?jobs:-j%jobs}

pushd %{_builddir}/%{name}-%{version}/build/tizen
%make_install DALI_DATA_RW_DIR="%{dali_data_rw_dir}" DALI_DATA_RO_DIR="%{dali_data_ro_dir}"
popd

pushd %{buildroot}%{_libdir}
for FILE in libdali2-csharp-binder*.so*; do mv "$FILE" "%{_builddir}/%{name}-%{version}/build/tizen/$FILE.wearable"; done
mv pkgconfig/dali2-csharp-binder*pc %{_builddir}/%{name}-%{version}/build/tizen/
popd

%if "%{?profile}" != "wearable"
make clean
%endif

%endif

#######################################################################
# If the profile is selected, the line below is repquired.
# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"
%configure --prefix=$PREFIX --enable-profile=IVI \
           --enable-tizen-major-version=%{tizen_version_major} \
%if 0%{?enable_debug}
           --enable-debug \
%endif
%if 0%{?rive_animation_view}
           --enable-rive-animation-view \
%endif
           $configure_flags --libdir=%{_libdir}

# Build.
make %{?jobs:-j%jobs}

pushd %{_builddir}/%{name}-%{version}/build/tizen
%make_install DALI_DATA_RW_DIR="%{dali_data_rw_dir}" DALI_DATA_RO_DIR="%{dali_data_ro_dir}"
popd

pushd %{buildroot}%{_libdir}
for FILE in libdali2-csharp-binder*.so*; do mv "$FILE" "%{_builddir}/%{name}-%{version}/build/tizen/$FILE.ivi"; done
mv pkgconfig/dali2-csharp-binder*pc %{_builddir}/%{name}-%{version}/build/tizen/
popd

%if "%{?profile}" != "ivi"
make clean
%endif

%endif

#######################################################################
# common
# If the profile is selected, the line below is repquired.
# if common ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%configure --prefix=$PREFIX --enable-profile=COMMON \
           --enable-tizen-major-version=%{tizen_version_major} \
%if 0%{?enable_debug}
           --enable-debug \
%endif
%if 0%{?rive_animation_view}
           --enable-rive-animation-view \
%endif
           $configure_flags --libdir=%{_libdir}

# Build.
make %{?jobs:-j%jobs}

pushd %{_builddir}/%{name}-%{version}/build/tizen
%make_install DALI_DATA_RW_DIR="%{dali_data_rw_dir}" DALI_DATA_RO_DIR="%{dali_data_ro_dir}"
popd

pushd %{buildroot}%{_libdir}
for FILE in libdali2-csharp-binder*.so*; do mv "$FILE" "%{_builddir}/%{name}-%{version}/build/tizen/$FILE"; done
mv pkgconfig/dali2-csharp-binder*pc %{_builddir}/%{name}-%{version}/build/tizen/
popd

%if "%{?profile}" != "common"
make clean
%endif

%endif

##############################
# Installation
##############################
%install
rm -rf %{buildroot}

pushd %{_builddir}/%{name}-%{version}/build/tizen
%make_install DALI_DATA_RW_DIR="%{dali_data_rw_dir}" DALI_DATA_RO_DIR="%{dali_data_ro_dir}"


# If the profile is selected, the line below is repquired.
# !unified && (wearable || tv || ivi || mobile)
%if "%{?profile}" == "wearable" || "%{?profile}" == "tv" || "%{?profile}" == "ivi" || "%{?profile}" == "mobile"
rm -rf %{buildroot}%{_libdir}/libdali2-csharp-binder*.so*
%endif

# If the profile is selected, the line below is repquired.
# wearable || tv || ivi || mobile || unified
%if "%{?profile}" != "common"
for FILE in libdali2-*.so*; do mv "$FILE" "%{buildroot}%{_libdir}/$FILE"; done
mv dali2-csharp-binder*.pc %{buildroot}%{_libdir}/pkgconfig/
%endif
popd

################################################
#rename
###############################################
pushd %{buildroot}%{_libdir}

# If the profile is selected, the line below is repquired.
# if common ||"undefined"
#%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
rm -rf libdali2-csharp-binder*.so
ln -s libdali2-csharp-binder.so.0.0.0 libdali2-csharp-binder.so
#%endif

# If the profile is selected, the line below is repquired.
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
rm -rf libdali2-csharp-binder*.so.wearable
ln -s libdali2-csharp-binder.so.0.0.*.wearable libdali2-csharp-binder.so.wearable
%endif

# If the profile is selected, the line below is repquired.
# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
rm -rf libdali2-csharp-binder*.so.tv
ln -s libdali2-csharp-binder.so.0.0.*.tv libdali2-csharp-binder.so.tv
%endif

# If the profile is selected, the line below is repquired.
# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"
rm -rf libdali2-csharp-binder*.so.ivi
ln -s libdali2-csharp-binder.so.0.0.*.ivi libdali2-csharp-binder.so.ivi
%endif

# If the profile is selected, the line below is repquired.
# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
rm -rf libdali2-csharp-binder*.so.mobile
ln -s libdali2-csharp-binder.so.0.0.*.mobile libdali2-csharp-binder.so.mobile
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

# If the profile is selected, the line below is repquired.
# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%post profile_mobile
pushd %{_libdir}
for FILE in libdali2-csharp-binder.so*.mobile; do ln -sf "$FILE" "${FILE%.mobile}"; done
popd
/sbin/ldconfig
exit 0

%postun profile_mobile
/sbin/ldconfig
exit 0
%endif

##############################

# If the profile is selected, the line below is repquired.
# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%post profile_tv
pushd %{_libdir}
for FILE in libdali2-csharp-binder.so*.tv; do ln -sf "$FILE" "${FILE%.tv}"; done
popd
/sbin/ldconfig
exit 0

%postun profile_tv
/sbin/ldconfig
exit 0
%endif

##############################

# If the profile is selected, the line below is repquired.
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%post profile_wearable
pushd %{_libdir}
for FILE in libdali2-csharp-binder.so*.wearable; do ln -sf "$FILE" "${FILE%.wearable}"; done
popd
/sbin/ldconfig
exit 0

%postun profile_wearable
/sbin/ldconfig
exit 0
%endif

##############################

# If the profile is selected, the line below is repquired.
# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"
%post profile_ivi
pushd %{_libdir}
for FILE in libdali2-csharp-binder.so*.ivi; do ln -sf "$FILE" "${FILE%.ivi}"; done
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
%license LICENSE

# If the profile is selected, the line below is repquired.
# if common ||"undefined"
#%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder.so*
%exclude %{_libdir}/libdali2-csharp-binder*.so*.mobile
%exclude %{_libdir}/libdali2-csharp-binder*.so*.wearable
%exclude %{_libdir}/libdali2-csharp-binder*.so*.tv
%exclude %{_libdir}/libdali2-csharp-binder*.so*.ivi
#%endif

# If the profile is selected, the line below is repquired.
# if common ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%files profile_common
# default .so files are housed in the main pkg.
%endif

# If the profile is selected, the line below is repquired.
# if mobile || "undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%files profile_mobile
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder.so.*mobile
%endif

# If the profile is selected, the line below is repquired.
# if tv ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "common" && "%{?profile}" != "ivi" && "%{?profile}" != "mobile"
%files profile_tv
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder.so.*tv
%endif

# If the profile is selected, the line below is repquired.
# if wearable || "undefined"
%if "%{?profile}" != "mobile" && "%{?profile}" != "tv" && "%{?profile}" != "ivi" && "%{?profile}" != "common"
%files profile_wearable
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder.so.*wearable
%endif

# If the profile is selected, the line below is repquired.
# if ivi ||"undefined"
%if "%{?profile}" != "wearable" && "%{?profile}" != "tv" && "%{?profile}" != "common" && "%{?profile}" != "mobile"
%files profile_ivi
%manifest dali-csharp-binder.manifest
%defattr(-,root,root,-)
%{_libdir}/libdali2-csharp-binder.so.*ivi
%endif

%files devel
%defattr(-,root,root,-)
%dir %{_includedir}/dali-csharp-binder/
%{_includedir}/dali-csharp-binder/*
%{_libdir}/pkgconfig/%{name}.pc

