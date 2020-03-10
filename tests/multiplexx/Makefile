# Makefile to build class 'multiplexx' for Pure Data.
# Needs Makefile.pdlibbuilder as helper makefile for platform-dependent build
# settings and rules.

# library name
lib.name = multiplexx

# input source file (class name == source file basename)
class.sources = multiplexxA.cpp multiplexxB.c

# all extra files to be included in binary distribution of the library
datafiles = multiplexx-help.pd multiplexx-meta.pd

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
	test -e $(classprefix)multiplexxA.$(extension)
	test -e $(classprefix)multiplexxB.$(extension)
installcheck: install
	test -e $(installpath)/$(classprefix)multiplexxA.$(extension)
	test -e $(installpath)/$(classprefix)multiplexxB.$(extension)
	test -e $(installpath)/multiplexx-help.pd
	test -e $(installpath)/multiplexx-meta.pd
