include config/config.mk

SRCSDIR = src/
BUILDIDR = build/
INCDIR = includes/
OBJDIR = $(BUILDIDR)OBJ/
DEPSDIR = $(BUILDIDR)DEPS/

DFLAGS = -MT $@ -MMD -MP -MF $(DEPSDIR)/$(patsubst %.c,%.d,$<)
ARFLAGS = rcs

LIBROOT = /usr/lib/
INCROOT = /usr/include/

ifndef NOT_COLORED
	CFLAGS += -DCOLORED
endif
