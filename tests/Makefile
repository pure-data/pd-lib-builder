# recursively build all example projects in the subdirectories

projects := $(filter-out _%, $(dir $(wildcard */Makefile)))

all: $(projects:%=%-build)
clean: $(projects:%=%-clean)
install: $(projects:%=%-install)
projects:
	@echo $(projects)

%-build: %/Makefile
	$(MAKE) -C $(<D)
%-clean: %/Makefile
	$(MAKE) -C $(<D) clean
%-install: %/Makefile
	$(MAKE) -C $(<D) install
