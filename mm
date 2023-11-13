#include $(LIBFTDIR)/Makefile

CC := cc
CFLAGS := -Wall -Wextra -Werror

AR := ar
ARFLAGS := rcs

LIBFTDIR := ./libft/
LIBFT := $(LIBFTDIR)/libft.a

SRC_DIRS := .
INCLUDE := ft_printf.h

SRC_FILES := ft_printf.c ft_printf_print.c
OBJ_FILES := $(SRC_FILES:.c=.o)

NAME := libftprintf.a


all: $(NAME)

$(NAME):  $(LIBFT) $(OBJ_FILES)
	$(AR) $(ARFLAGS) $@ $?

$(LIBFT) : $(LIBFTDIR)
	make -C $(LIBFTDIR) 

%.o: %.c $(INCLUDE) Makefile
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

bonus: all

clean:
	$(MAKE) clean -C $(LIBFTDIR) 
	rm -rf $(OBJ_FILES)

fclean: clean
	$(MAKE) fclean -C $(LIBFTDIR) 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re