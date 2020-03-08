# Makefile to build class 'multishared' for Pure Data.
# Needs Makefile.pdlibbuilder as helper makefile for platform-dependent build
# settings and rules.

# library name
lib.name = multishared

# common functions
shared.sources = shared.c

# input source file (class name == source file basename)
class.sources = multisharedA.c multisharedB.c

# all extra files to be included in binary distribution of the library
datafiles = multishared-help.pd multishared-meta.pd

# include Makefile.pdlibbuilder
# (for real-world projects see the "Project Management" section
# in tips-tricks.md)
PDLIBBUILDER_DIR=../..
include $(PDLIBBUILDER_DIR)/Makefile.pdlibbuilder

# simplistic tests whether all expected files have been produced/installed
buildcheck: all
ifeq ($(shared.extension), $(extension))
	test -e lib$(lib.name).$(shared.extension)
else
	test -e lib$(lib.name).$(extension).$(shared.extension)
endif
	test -e multisharedA.$(extension)
	test -e multisharedB.$(extension)
installcheck: install
ifeq ($(shared.extension), $(extension))
	test -e $(installpath)/lib$(lib.name).$(shared.extension)
else
	test -e $(installpath)/lib$(lib.name).$(extension).$(shared.extension)
endif
	test -e $(installpath)/multisharedA.$(extension)
	test -e $(installpath)/multisharedB.$(extension)
	test -e $(installpath)/multishared-help.pd
	test -e $(installpath)/multishared-meta.pd
