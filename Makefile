CC := cc
CFLAGS := -Wall -Wextra -Werror

AR := ar
ARFLAGS := rcs

LIBFTDIR := ./libft
LIBFT := $(LIBFTDIR)/libft.a

SRC_DIRS := .
INCLUDE := ft_printf.h

SRC_FILES := ft_printf.c ft_printf_print.c ft_printf_print_ints_format.c \
			ft_printf_print_ints_format_helpers.c ft_printf_print_ints_format_helpers_2.c \
			ft_printf_print_adrs.c ft_printf_print_ints_adrs_helpers.c ft_printf_print_helpers.c \
			ft_printf_print_chars.c ft_printf_format_generator.c ft_printf_format_fill.c
OBJ_FILES := $(SRC_FILES:.c=.o)

NAME := libftprintf.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_FILES)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $@ $^

$(LIBFT): $(LIBFTDIR)
	$(MAKE) -C $(LIBFTDIR)

$(SRC_DIRS)%.o: $(SRC_DIRS)%.c $(INCLUDE)
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

bonus: all

clean:
	$(MAKE) clean -C $(LIBFTDIR) 
	rm -rf $(OBJ_FILES)

fclean: clean
	$(MAKE) fclean -C $(LIBFTDIR) 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus