# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjamie <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/17 11:28:33 by sjamie            #+#    #+#              #
#    Updated: 2019/06/17 11:45:27 by sjamie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HF=includes
SF=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_swap.c srcs/ft_strlen.c
OF=ft_putchar.o ft_putstr.o ft_strcmp.o ft_swap.o ft_strlen.o

all: libft_create

libft_create:
	gcc -c $(SF) -I $(HF)
	ar -rv libft.a $(OF)
	ranlib libft.a

clean:
	-rm -f *.o

fclean: clean
		-rm -f libft.a

re: fclean all
