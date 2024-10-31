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
SRCS += allocators/arena/new.c           \
	allocators/arena/free.c          \
	allocators/arena/empty.c         \
	allocators/arena/malloc.c        \
	allocators/arena/calloc.c        \
	allocators/arena/get_suitable.c  \
	allocators/arena/get_allocator.c
SRCS += allocators/block/free.c           \
	allocators/block/copy.c           \
	allocators/block/arena.c          \
	allocators/block/calloc.c         \
	allocators/block/malloc.c         \
	allocators/block/resize.c         \
	allocators/block/divide.c         \
	allocators/block/get_size.c       \
	allocators/block/get_allocator.c  \
	allocators/block/get_first_free.c
SRCS += memory/bzero.c  \
	memory/memcpy.c \
	memory/memset.c \
	memory/memmove.c
SRCS += ascii/ft_is_ascii.c \
	ascii/ft_is_print.c \
	ascii/ft_is_alnum.c \
	ascii/ft_is_alpha.c \
	ascii/ft_is_digit.c \
	ascii/ft_is_space.c \
	ascii/ft_is_lower.c \
	ascii/ft_is_upper.c \
	ascii/ft_to_lower.c \
	ascii/ft_to_upper.c
SRCS += cstr/ft_cstrlen.c \
	cstr/ft_cstrchr.c \
	cstr/ft_cstrclen.c \
	cstr/ft_cstrrchr.c \
	cstr/ft_cstrschr.c \
	cstr/ft_cstrrschr.c
SRCS += io/files/open.c
OBJS := $(addprefix $(OBJDIR),$(SRCS:.c=.o))
DEPS := $(addprefix $(DEPSDIR),$(SRCS:.c=.d))

NAME = libft
SONAME = $(BUILDIDR)$(NAME).so
ANAME = $(BUILDIDR)$(NAME).a
HEADERNAME = $(INCDIR)$(NAME).h

all: dynamic static

-include $(DEPS)

dynamic: $(SONAME)

static: $(ANAME)

$(OBJDIR)%.o: $(SRCSDIR)%.c
	@norminette $< | grep "Error" > /dev/stderr | norminette $< > /dev/null
	@printf "$(BLUE)$(BOLD)[NRM] $(RESET)=> file $<: OK!\n$(BOLD)[CMP] $(RESET)=> compiling file $< and generating dependecies\n"
	@mkdir -p $(dir $@) $(dir $(DEPSDIR)$(patsubst %.c,%.d,$<))
	@$(CC) -o $@ -c $(CFLAGS) $(DFLAGS) $<
	@touch $(DEPSDIR)$(patsubst %.c,%.d,$<)

$(SONAME): $(OBJS)
	@norminette | grep "Error" > /dev/stderr | norminette > /dev/null
	@printf "$(GREEN)$(BOLD)[LNK] $(RESET)=> linking $(SONAME) dynamic lib\n"
	@$(LD) -shared -o $(SONAME) $(OBJS) $(LDFLAGS)

$(ANAME): $(OBJS)
	@norminette | grep "Error" > /dev/stderr | norminette > /dev/null
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
