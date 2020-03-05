# Makefile to build class 'multilib' for Pure Data.
# Needs Makefile.pdlibbuilder as helper makefile for platform-dependent build
# settings and rules.

# library name
lib.name = multilib

make-lib-executable=yes

# input source file (class name == source file basename)
class.sources = multilibA.c multilibB.c

# glue for building a multi-object library
lib.setup.sources = $(lib.name).c

# all extra files to be included in binary distribution of the library
datafiles = multilib-help.pd multilib-meta.pd

# include Makefile.pdlibbuilder
# (for real-world projects see the "Project Management" section
# in tips-tricks.md)
PDLIBBUILDER_DIR=../..
include $(PDLIBBUILDER_DIR)/Makefile.pdlibbuilder


# simplistic tests whether all expected files have been produced/installed
buildcheck: all
	test -e multilib.$(extension)
installcheck: install
	test -e $(installpath)/multilib.$(extension)
	test -e $(installpath)/multilib-help.pd
	test -e $(installpath)/multilib-meta.pd
