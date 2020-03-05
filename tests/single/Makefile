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
buildcheck: all
	test -e single.$(extension)
installcheck: install
	test -e $(installpath)/single.$(extension)
