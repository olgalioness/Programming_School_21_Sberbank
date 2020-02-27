# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshanae <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/13 14:47:15 by bshanae           #+#    #+#              #
#    Updated: 2019/02/13 16:16:13 by bshanae          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
FLAGS = -Wall -Wextra -Werror
SRC = ./src/*.c

all : $(NAME)

$(NAME) : 
	gcc -I $(FLAGS) $(SRC) -o $(NAME)

clean : 
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
