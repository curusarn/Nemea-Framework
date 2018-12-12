%define debug_package %{nil}

Summary: Development package for Unirec message format handling.
Name: unirec
Version: 2.3.0
Release: 1
URL: http://www.liberouter.org/
Source0: https://github.com/CESNET/Nemea-Framework/raw/dist-packages/unirec/%{name}-%{version}.tar.gz
Group: Liberouter
License: BSD
Vendor: CESNET, z.s.p.o.
Packager: Travis CI User <travis@example.org>
BuildRoot: %{_tmppath}/%{name}-%{version}-%{release}

Requires: libtrap
BuildRequires: gcc make doxygen pkgconfig libtrap-devel
Provides: unirec

%description
This package contains header files for Unirec library. Install this package
if you want to develop programs that use Unirec message format.

%prep
%setup

%build
./configure --prefix=%{_prefix} --libdir=%{_libdir} --bindir=%{_bindir}/nemea --docdir=%{_docdir} --disable-doxygen-pdf --disable-doxygen-ps --disable-tests -q
make -j4
make doc

%install
make DESTDIR=$RPM_BUILD_ROOT install -j4

%post
ldconfig

%files
%{_libdir}/pkgconfig/unirec.pc
%{_libdir}/libunirec.a
%{_libdir}/libunirec.la
%{_bindir}/nemea/ur_values.sh
%{_bindir}/nemea/ur_processor.sh
%{_prefix}/include/unirec/*
%{_docdir}/unirec/*

