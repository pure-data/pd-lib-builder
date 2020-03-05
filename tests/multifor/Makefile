# Makefile to build class 'multifor' for Pure Data.
# Needs Makefile.pdlibbuilder as helper makefile for platform-dependent build
# settings and rules.

# library name
lib.name = multifor

# input source file (class name == source file basename)
class.sources = multiforA.c

# additional classes
define forLinux
  class.sources += multiforB.c
endef
define forDarwin
  class.sources += multiforB.c
endef
define forWindows
  class.sources += multiforB.c
endef

# all extra files to be included in binary distribution of the library
datafiles = multifor-help.pd multifor-meta.pd

# include Makefile.pdlibbuilder
# (for real-world projects see the "Project Management" section
# in tips-tricks.md)
PDLIBBUILDER_DIR=../..
include $(PDLIBBUILDER_DIR)/Makefile.pdlibbuilder

# simplistic tests whether all expected files have been produced/installed
buildcheck: all
	test -e multiforA.$(extension)
	test -e multiforB.$(extension)
installcheck: install
	test -e $(installpath)/multiforA.$(extension)
	test -e $(installpath)/multiforB.$(extension)
	test -e $(installpath)/multifor-help.pd
	test -e $(installpath)/multifor-meta.pd
