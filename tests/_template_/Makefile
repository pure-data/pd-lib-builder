# Makefile to build class '_template_' for Pure Data.
# Needs Makefile.pdlibbuilder as helper makefile for platform-dependent build
# settings and rules.

# library name
lib.name = _template_

# input source file (class name == source file basename)
class.sources = _template_.c

# all extra files to be included in binary distribution of the library
datafiles = _template_-help.pd _template_-meta.pd

# include Makefile.pdlibbuilder
# (for real-world projects see the "Project Management" section
# in tips-tricks.md)
PDLIBBUILDER_DIR=../..
include $(PDLIBBUILDER_DIR)/Makefile.pdlibbuilder

# simplistic tests whether all expected files have been produced/installed
buildcheck: all
	test -e _template_.$(extension)
installcheck: install
	test -e $(installpath)/_template_.$(extension)
