# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yzirri <yzirri@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 01:57:29 by yzirri            #+#    #+#              #
#    Updated: 2023/11/10 21:34:00 by yzirri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wno-format #-Wall -Wextra -Werror

#SRC = ft_printf.c
SRC = ../ft_printf.c ../ft_printf_print.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

#======= NO FLAGS ==========

${NAME} : ${OBJ} 
	@${MAKE} -C ../libft
	@${CC} ${CFLAGS} ${OBJ} ../libft/libft.a -o ${NAME}  

%.o: %.c 
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	@rm -f $(OBJ) $(OBJBONUS)
	${MAKE} clean -C ./libft

fclean: clean
	@rm -f $(NAME)
	${MAKE} fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re bonus