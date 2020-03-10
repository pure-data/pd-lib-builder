# Makefile to build class 'single' for Pure Data.
# Needs Makefile.pdlibbuilder as helper makefile for platform-dependent build
# settings and rules.

# library name
lib.name = single

# input source file (class name == source file basename)
class.sources = single.c

# all extra files to be included in binary distribution of the library
datafiles = single-help.pd single-meta.pd

# include Makefile.pdlibbuilder
# (for real-world projects see the "Project Management" section
# in tips-tricks.md)
PDLIBBUILDER_DIR=../..
include $(PDLIBBUILDER_DIR)/Makefile.pdlibbuilder

# simplistic tests whether all expected files have been produced/installed
ifeq ($(system), Android)
  classprefix=lib
endif
buildcheck: all
	test -e $(classprefix)single.$(extension)
installcheck: install
	test -e $(installpath)/$(classprefix)single.$(extension)
