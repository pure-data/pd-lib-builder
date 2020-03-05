# Makefile to build class 'multiple' for Pure Data.
# Needs Makefile.pdlibbuilder as helper makefile for platform-dependent build
# settings and rules.

# library name
lib.name = multiple

# input source file (class name == source file basename)
class.sources = multipleA.c multipleB.c

# all extra files to be included in binary distribution of the library
datafiles = multiple-help.pd multiple-meta.pd

# include Makefile.pdlibbuilder
# (for real-world projects see the "Project Management" section
# in tips-tricks.md)
PDLIBBUILDER_DIR=../..
include $(PDLIBBUILDER_DIR)/Makefile.pdlibbuilder

# simplistic tests whether all expected files have been produced/installed
buildcheck: all
	test -e multipleA.$(extension)
	test -e multipleB.$(extension)
installcheck: install
	test -e $(installpath)/multipleA.$(extension)
	test -e $(installpath)/multipleB.$(extension)
	test -e $(installpath)/multiple-help.pd
	test -e $(installpath)/multiple-meta.pd
