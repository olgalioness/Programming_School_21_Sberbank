# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhaired <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 15:55:46 by lhaired           #+#    #+#              #
#    Updated: 2019/08/12 16:41:11 by lhaired          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC0 = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
SRC1 = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEAD = includes/ft_put.h

all: $(NAME)

$(NAME):
	gcc -c $(SRC0) -I $(HEAD)
	ar rc $(NAME) $(SRC1)
	ranlib $(NAME)

clean:
	/bin/rm -f $(SRC1)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

