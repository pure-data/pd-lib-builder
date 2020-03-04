# Makefile to build class 'single' for Pure Data.
# Needs Makefile.pdlibbuilder as helper makefile for platform-dependent build
# settings and rules.

# library name
lib.name = single

# input source file (class name == source file basename)
class.sources = single.c

# all extra files to be included in binary distribution of the library
datafiles = single-help.pd single-meta.pd

# include Makefile.pdlibbuilder from submodule directory 'pd-lib-builder'
PDLIBBUILDER_DIR=../..
include $(PDLIBBUILDER_DIR)/Makefile.pdlibbuilder
