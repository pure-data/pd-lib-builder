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

# include Makefile.pdlibbuilder from submodule directory 'pd-lib-builder'
PDLIBBUILDER_DIR=../..
include $(PDLIBBUILDER_DIR)/Makefile.pdlibbuilder
