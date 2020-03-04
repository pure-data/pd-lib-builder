# recursively build all example projects in the subdirectories

projects := $(filter-out _%, $(dir $(wildcard */Makefile)))

all: $(projects:%=%-build)
buildcheck: $(projects:%=%-buildcheck)
install: $(projects:%=%-install)
installcheck: $(projects:%=%-installcheck)
clean: $(projects:%=%-clean)

projects:
	@echo $(projects)

%-build: %/Makefile
	$(MAKE) -C $(<D)
%-clean: %/Makefile
	$(MAKE) -C $(<D) clean
%-install: %/Makefile
	$(MAKE) -C $(<D) install
%-buildcheck: %/Makefile %-build
	$(MAKE) -C $(<D) buildcheck
%-installcheck: %/Makefile
	$(MAKE) -C $(<D) installcheck
