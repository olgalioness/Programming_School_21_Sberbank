# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 13:57:07 by qjosmyn           #+#    #+#              #
#    Updated: 2019/08/13 21:39:49 by qjosmyn          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

GCC = gcc -Wall -Wextra -Werror

NAME = do-op

all: $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

$(NAME): main.c ft_putchar.c ft_putnbr.c operation.c check.c ft_atoi.c
	$(GCC) -o $(NAME) main.c ft_putchar.c ft_putnbr.c operation.c check.c ft_atoi.c

re: fclean all
