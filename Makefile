include config/config.mk
include config/colors.mk

SRCS := system/calls/ft_read.c    \
	system/calls/ft_open.c    \
	system/calls/ft_exit.c    \
	system/calls/ft_mmap.c    \
	system/calls/ft_write.c   \
	system/calls/ft_close.c   \
	system/calls/ft_munmap.c  \
	system/calls/ft_syscall.c
SRCS += errno/ft_errno.c
SRCS += allocators/arena/new.c \
	allocators/arena/free.c \
	allocators/arena/empty.c \
	allocators/arena/malloc.c \
	allocators/arena/calloc.c \
	allocators/arena/get_suitable.c
SRCS += memory/bzero.c
OBJS := $(addprefix $(OBJDIR),$(SRCS:.c=.o))
DEPS := $(addprefix $(DEPSDIR),$(SRCS:.c=.d))

NAME = libft
SONAME = $(BUILDIDR)$(NAME).so
ANAME = $(BUILDIDR)$(NAME).a
HEADERNAME = $(INCDIR)$(NAME).h

all: dynamic static test

-include $(DEPS)

dynamic: $(SONAME)

static: $(ANAME)

$(OBJDIR)%.o: $(SRCSDIR)%.c
	@norminette $< > /dev/null
	@printf "$(BLUE)$(BOLD)[NRM] $(RESET)=> file $<: OK!\n$(BOLD)[CMP] $(RESET)=> compiling file $< and generating dependecies\n"
	@mkdir -p $(dir $@) $(dir $(DEPSDIR)$(patsubst %.c,%.d,$<))
	@$(CC) -o $@ -c $(CFLAGS) $(DFLAGS) $<
	@touch $(DEPSDIR)$(patsubst %.c,%.d,$<)

$(SONAME): $(OBJS)
	@norminette > /dev/null
	@printf "$(GREEN)$(BOLD)[LNK] $(RESET)=> linking $(SONAME) dynamic lib\n"
	@$(LD) -shared -o $(SONAME) $(OBJS) $(LDFLAGS)

$(ANAME): $(OBJS)
	@norminette > /dev/null
	@printf "$(MAGENTA)$(BOLD)[PKG] $(RESET)=> packing $(ANAME) static lib\n"
	@$(AR) $(ARFLAGS) -o $(ANAME) $(OBJS)

clean:
	@printf "$(RED)$(BOLD)[CLN] $(RESET)=> cleaning object files\n"
	@rm -fr $(OBJDIR)
	@printf "$(RED)$(BOLD)[CLN] $(RESET)=> cleaning dependencies files\n"
	@rm -fr $(DEPSDIR)

fclean: clean
	@printf "$(RED)$(BOLD)[CLN] $(RESET)=> cleaning library files\n"
	@rm -fr $(SONAME)
	@rm -fr $(ANAME)
	@printf "$(RED)$(BOLD)[CLN] $(RESET)=> removing all suprapack archives\n"
	@rm -fr **/*.suprapack

re: fclean all

install: all
	@printf "$(YELLOW)$(BOLD)[INS] $(RESET)=> installing libft to $(LIBROOT)\n"
	@cp $(SONAME) $(ANAME) $(LIBROOT)
	@cp -r $(INCDIR)/* $(INCROOT)

suprapack: all
	@printf "$(MAGENTA)$(BOLD)[PKG] $(RESET)=> packing libft to suprapack package\n"
	@mkdir -p $(BUILDIDR)usr/lib
	@cp $(SONAME) $(ANAME) $(BUILDIDR)usr/lib
	@cp -r $(INCDIR) $(BUILDIDR)usr
	@suprapack build $(BUILDIDR)usr

.PHONY:all dynamic static re clean fclean install suprapack
