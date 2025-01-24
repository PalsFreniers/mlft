AR = ar
CC = clang
LD = clang
MAKE = make

CFLAGS = -Iincludes -Wall -Wextra -fPIC
LDFLAGS = -fPIE -nostdlib

ifdef ERRORNORM
	CFLAGS += -Werror
endif

ifdef DEBUG
	CFLAGS += -g -ggdb -gdwarf-2
	ifeq (DEBUG, address)
		LDFLAGS += -fsanitize=address
	else ifeq (DEBUG, thread)
		LDFLAGS += -fsanitize=thread
	else ifeq (DEBUG, memory)
		LDFLAGS += -fsanitize=memory
	endif
endif
