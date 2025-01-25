include ../../config/testconfig.mk
include ../../config/colors.mk

NAME = asserts

all:
	@echo "$(BLUE)[INFO]$(RESET) => testing $(NAME)"
	@$(CC) $(CFLAGS) -o test main.c $(LDFLAGS)
ifndef SILENCED
	@./test
else
	@./test > /dev/null 2> /dev/null
endif
	@rm -fr test

