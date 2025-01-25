include ../config/config.mk
include ../config/colors.mk

all:
ifdef SILENCED
	@$(MAKE) --no-print-directory -C assert SILENCED=1
else
	@$(MAKE) --no-print-directory -C assert
endif
	@echo "$(GREEN)[SUCCESS]$(RESET) => all tests passed"

