AR = ar
CC = clang
LD = clang

SRCSDIR = src/
BUILDIDR = build/
INCDIR = includes/
OBJDIR = $(BUILDIDR)OBJ/
DEPSDIR = $(BUILDIDR)DEPS/

CFLAGS = -Iincludes -Wall -Wextra -fPIC
DFLAGS = -MT $@ -MMD -MP -MF $(DEPSDIR)/$(patsubst %.c,%.d,$<)
ARFLAGS = rcs
LDFLAGS = -fPIE -nostdlib

LIBROOT = /usr/lib/
INCROOT = /usr/include/

ifdef ERRORNORM
	CFLAGS += -Werror
endif

ifdef DEBUG
	CFLAGS += -g -ggdb
	ifeq (DEBUG, address)
		LDFLAGS += -fsanitize=address
	else ifeq (DEBUG, thread)
		LDFLAGS += -fsanitize=thread
	else ifeq (DEBUG, memory)
		LDFLAGS += -fsanitize=memory
	endif
endif
