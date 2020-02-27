# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 13:57:07 by qjosmyn           #+#    #+#              #
#    Updated: 2019/08/12 17:14:53 by qjosmyn          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

GCC = gcc -I./includes -Wall -Wextra -Werror -c

NAME = compile

all: $(NAME)

clean:
	/bin/rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	/bin/rm -f $(NAME)

ft_swap.o: ./src/ft_swap.c
	$(GCC) ./src/ft_swap.c

ft_strlen.o: ./src/ft_strlen.c
	$(GCC) ./src/ft_strlen.c

ft_strcmp.o: ./src/ft_strcmp.c
	$(GCC) ./src/ft_strcmp.c

ft_putstr.o: ./src/ft_putstr.c
	$(GCC) ./src/ft_putstr.c

ft_putchar.o: ./src/ft_putchar.c
	$(GCC) ./src/ft_putchar.c

$(NAME): ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

re: clean all
