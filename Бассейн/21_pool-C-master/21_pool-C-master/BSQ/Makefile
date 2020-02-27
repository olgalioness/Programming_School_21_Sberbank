# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjamie <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/19 18:30:31 by sjamie            #+#    #+#              #
#    Updated: 2019/06/26 20:51:45 by sjamie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = ./srcs/ft_functions.c ./srcs/main.c ./srcs/handler.c ./srcs/map_reader.c ./srcs/squ.c
HEADER = ./includes/bsq.h
OBJ = ft_functions.o main.o handler.o map_reader.o squ.o
GCCW = gcc -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(GCCW) -c $(SRC) -I$(HEADER)
	ar rc libft.a $(OBJ)
	ranlib libft.a
	$(GCCW) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f libft.a

re: fclean all
