AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = simple_proj
simple_proj_SOURCES = main.c func.c header.h

.PHONY: clean_all
clean_all: distclean maintainer-clean uninstall-am clean-binPROGRAMS clean-cscope
	rm -rf .deps/ aclocal.m4 configure
	find . -type l -delete
