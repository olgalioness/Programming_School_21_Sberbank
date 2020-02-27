# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshanae <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/13 16:16:38 by bshanae           #+#    #+#              #
#    Updated: 2019/02/13 16:39:32 by bshanae          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
FLAGS = -Wall -Wextra -Werror
SRC = src.c

all : $(NAME)

$(NAME) : 
	gcc $(FLAGS) -o $(NAME) $(SRC)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
