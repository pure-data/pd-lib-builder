# recursively build all example projects in the subdirectories


makefiledirs := $(filter-out _%, $(dir $(wildcard */Makefile)))

PDLIBBUILDER_DIR = ../
include $(PDLIBBUILDER_DIR)/Makefile.pdlibbuilder

buildcheck installcheck: $(makefiledirs)

projects:
	@echo $(makefiledirs)
