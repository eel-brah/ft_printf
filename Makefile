CC := cc
CFLAGS := -Wall -Wextra -Werror

AR := ar
ARFLAGS := rcs

LIBFTDIR := ./libft
LIBFT := $(LIBFTDIR)/libft.a

SRC_DIRS := .
INCLUDE := libftprintf.h

SRC_FILES := ft_printf.c ft_printf_print.c
OBJ_FILES := $(SRC_FILES:.c=.o)

NAME := libftprintf.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_FILES)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $@ $?

$(LIBFT): $(LIBFTDIR)
	$(MAKE) -C $(LIBFTDIR) 

$(SRC_DIRS)%.o: $(SRC_DIRS)%.c $(INCLUDE)
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

clean:
	$(MAKE) clean -C $(LIBFTDIR) 
	rm -rf $(OBJ_FILES)

fclean: clean
	$(MAKE) fclean -C $(LIBFTDIR) 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re