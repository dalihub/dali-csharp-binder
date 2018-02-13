
include ./file.list

dali_csharp_binder_includes = \
        -I.

libdali_csharp_binder_la_LTLIBRARIES = libdali-csharp-binder.la
libdali_csharp_binder_ladir = $(libdir)
libdali_csharp_binder_la_LIBADD = @DALI_LIBS@
libdali_csharp_binder_la_LDFLAGS = ${LDFLAGS}
libdali_csharp_binder_la_CXXFLAGS = \
   ${CFLAGS} \
   $(DALI_CFLAGS) \
   $(viewer_dali_CFLAGS) \
   $(dali_csharp_binder_includes)

if ECOREWL2
libdali_csharp_binder_la_CXXFLAGS+= $(ECORE_WL2_CFLAGS)
else
libdali_csharp_binder_la_CXXFLAGS+= $(ECORE_WAYLAND_CFLAGS)
endif

# added for key grab binding only for tizen
if TIZENBUILD
libdali_csharp_binder_la_CXXFLAGS += -DTIZEN_BUILD
libdali_csharp_binder_la_SOURCES = $(dali_csharp_binder_src_files_tizen)
else
libdali_csharp_binder_la_SOURCES = $(dali_csharp_binder_src_files)
endif

libdali_csharp_binderdir = $(includedir)/dali-csharp-binder
libdali_csharp_binder_HEADERS = $(dali_csharp_binder_header_files)


