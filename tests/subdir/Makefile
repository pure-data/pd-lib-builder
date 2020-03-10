# Makefile to build class 'subdir' for Pure Data.
# Needs Makefile.pdlibbuilder as helper makefile for platform-dependent build
# settings and rules.

# library name
lib.name = subdir

# input source file (class name == source file basename)
class.sources = src/subdir.c src/subdir~.c

# all extra files to be included in binary distribution of the library
datafiles = subdir-help.pd subdir-meta.pd

# include Makefile.pdlibbuilder
# (for real-world projects see the "Project Management" section
# in tips-tricks.md)

PDLIBBUILDER_DIR=../..
include $(PDLIBBUILDER_DIR)/Makefile.pdlibbuilder

# simplistic tests whether all expected files have been produced/installed
buildcheck: all
	test -e subdir.$(extension)
	test -e subdir~.$(extension)
installcheck: install
	test -e $(installpath)/subdir.$(extension)
	test -e $(installpath)/subdir~.$(extension)
