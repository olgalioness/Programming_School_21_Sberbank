# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snorcros <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 12:55:30 by snorcros          #+#    #+#              #
#    Updated: 2019/08/17 14:23:25 by snorcros         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c  srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c 
SRC0 = ft_putchar.o ft_putstr.o  ft_strcmp.o ft_strlen.o ft_swap.o 
HEADER = includes


all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(SRC0)

clean:
	/bin/rm -f $(SRC0)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

