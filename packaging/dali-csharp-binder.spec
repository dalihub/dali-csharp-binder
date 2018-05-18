
Name: dali-csharp-binder
Version: 1.3.25
Release: 1
Summary: build dali csharp binder
License: Apache-2.0 and BSD-3-Clause and MIT
Group: uifw/graphic
Source: %{name}-%{version}.tar.xz

BuildRequires: pkgconfig(dali-core)
BuildRequires: pkgconfig(dali-adaptor)
BuildRequires: pkgconfig(dali-toolkit)
BuildRequires: pkgconfig(widget_viewer_dali)
%if 0%{?tizen_version_major} >= 5
BuildRequires: pkgconfig(ecore-wl2)
%else
BuildRequires:  pkgconfig(ecore-wayland)
%endif

%description
dali-csharp-binder

%if 0%{?tizen_version_major} >= 5
CFLAGS+=" -DECORE_WL2 -DEFL_BETA_API_SUPPORT"
CXXFLAGS+=" -DECORE_WL2 -DEFL_BETA_API_SUPPORT"
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

##############################
# Build
##############################
%build
%autogen
# added for key grab binding only for tizen
# Do not merge this on tizen branch!
%if 0%{?tizen_version_major} >= 5
%configure --enable-ecoreWl2=yes \
           --enable-tizenBuild=no
%else
%configure --enable-tizenBuild=no
%endif

make %{?_smp_mflags}

##############################
# Installation
##############################
%install
%make_install

##############################
# Files in Binary Packages
##############################
%files -n %{name}
%manifest dali-csharp-binder.manifest     
%defattr(-,root,root,-)
%{_libdir}/lib%{name}.so*

%files devel
%defattr(-,root,root,-)
%dir %{_includedir}/%{name}/
%{_includedir}/%{name}/*
%{_libdir}/pkgconfig/%{name}.pc

