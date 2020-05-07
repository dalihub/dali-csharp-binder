#
# Copyright (c) 2020 Samsung Electronics Co., Ltd.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

MAINTAINERCLEANFILES = \
    aclocal.m4 \
    autom4te.cache \
    config.guess \
    config.sub \
    config.h.in \
    configure \
    depcomp \
    install-sh \
    ltmain.sh \
    m4 \
    missing \
    `find "$(srcdir)" -type f -name Makefile.in -print` \
    `find . \( -name "*.gcov" -o -name "*.gcno" -o -name "*.gcda" \) -print`

CLEANFILES = \
	`find . \( -name "*.gcov" -o -name "*.gcno" -o -name "*.gcda" \) -print`

# Build the Dali csharp binder library

############# INCLUDE FILE LISTS #############

dali_csharp_binder_dir = ../../dali-csharp-binder
include ../../dali-csharp-binder/file.list

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = dali2-csharp-binder.pc

# sources
if UBUNTU_PROFILE
LIBDALI_CSHARP_BINDER_LA_SOURCES = \
                        $(dali_csharp_binder_common_src_files)
endif

if MOBILE_PROFILE
LIBDALI_CSHARP_BINDER_LA_SOURCES = \
                        $(dali_csharp_binder_common_src_files) \
                        $(dali_csharp_binder_tizen_src_files)
endif

if IVI_PROFILE
LIBDALI_CSHARP_BINDER_LA_SOURCES = \
                        $(dali_csharp_binder_common_src_files) \
                        $(dali_csharp_binder_tizen_src_files)
endif

if TV_PROFILE
LIBDALI_CSHARP_BINDER_LA_SOURCES = \
                        $(dali_csharp_binder_common_src_files) \
                        $(dali_csharp_binder_tizen_src_files)
endif

if COMMON_PROFILE
LIBDALI_CSHARP_BINDER_LA_SOURCES = \
                        $(dali_csharp_binder_common_src_files) \
                        $(dali_csharp_binder_tizen_src_files)
endif

if WEARABLE_PROFILE
LIBDALI_CSHARP_BINDER_LA_SOURCES = \
                        $(dali_csharp_binder_common_src_files) \
                        $(dali_csharp_binder_tizen_src_files) \
                        $(dali_csharp_binder_tizen_wearable_src_files)
endif


LIBDALI_CSHARP_BINDER_LA_includes = \
        -I../../

LIBDALI_CSHARP_BINDER_LA_CXXFLAGS = \
                        -DDALI_DATA_RW_DIR="\"${daliReadWriteDir}\"" \
                        -DDALI_DATA_RO_DIR="\"${daliReadOnlyDir}\"" \
                        $(LIBDALI_CSHARP_BINDER_LA_includes) \
                        ${CFLAGS} \
                        $(DALICORE_CFLAGS) \
                        $(DALIADAPTOR_CFLAGS) \
                        $(DALITOOLKIT_CFLAGS)

LIBDALI_CSHARP_BINDER_LA_LIBADD = \
                    $(DALICORE_LIBS) \
                    $(DALIADAPTOR_LIBS) \
                    $(DALITOOLKIT_LIBS)

if !UBUNTU_PROFILE
LIBDALI_CSHARP_BINDER_LA_CXXFLAGS += -DTIZEN_BUILD \
                            $(DALIWIDGET_CFLAGS)
LIBDALI_CSHARP_BINDER_LA_LIBADD += $(DALIWIDGET_LIBS)
if ECORE_WAYLAND2
LIBDALI_CSHARP_BINDER_LA_CXXFLAGS += -DECORE_WL2 \
                            -DEFL_BETA_API_SUPPORT \
                            $(ECORE_WL2_CFLAGS)
else
LIBDALI_CSHARP_BINDER_LA_CXXFLAGS += $(ECORE_WAYLAND_CFLAGS)
endif

endif

lib_LTLIBRARIES = libdali2-csharp-binder.la

libdali2_csharp_binder_la_SOURCES = $(LIBDALI_CSHARP_BINDER_LA_SOURCES)
libdali2_csharp_binder_la_includes = $(LIBDALI_CSHARP_BINDER_LA_INCLUDES)
libdali2_csharp_binder_ladir = $(libdir)
libdali2_csharp_binder_la_LDFLAGS = ${LDFLAGS}
libdali2_csharp_binder_la_CXXFLAGS = $(LIBDALI_CSHARP_BINDER_LA_CXXFLAGS)
libdali2_csharp_binder_la_LIBADD = $(LIBDALI_CSHARP_BINDER_LA_LIBADD)

libdali2_csharp_binderdir = $(includedir)/dali-csharp-binder
libdali2_csharp_binder_HEADERS = $(dali_csharp_binder_header_files)
