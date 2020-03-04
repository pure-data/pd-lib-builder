# Makefile to build class '_template_' for Pure Data.
# Needs Makefile.pdlibbuilder as helper makefile for platform-dependent build
# settings and rules.

# library name
lib.name = _template_

# input source file (class name == source file basename)
class.sources = _template_.c

# all extra files to be included in binary distribution of the library
datafiles = _template_-help.pd _template_-meta.pd

# include Makefile.pdlibbuilder from submodule directory 'pd-lib-builder'
PDLIBBUILDER_DIR=../..
include $(PDLIBBUILDER_DIR)/Makefile.pdlibbuilder
