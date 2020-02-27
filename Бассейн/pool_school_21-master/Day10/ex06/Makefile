# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhaired <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 15:55:46 by lhaired           #+#    #+#              #
#    Updated: 2019/08/13 16:37:26 by lhaired          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC0 = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_putnbr.c srcs/ft_atoi.c srcs/do_op.c srcs/main.c srcs/operation.c
HEAD = includes/ft_put.h includes/ft_opp.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC0)

clean:
	/bin/rm -f $(NAME)

re: clean all
