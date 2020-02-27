# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshanae <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 14:14:42 by bshanae           #+#    #+#              #
#    Updated: 2019/02/11 17:09:13 by bshanae          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "do-op"
SRC = ./src/*.c
HEADER = ./include

all : do-op clean

do-op : 
	gcc -I$(HEADER) $(SRC) -o $(NAME) 

clean :
	rm -f ./*.o

fclean : clean
	rm -f ./do-op

re : fclean do-op
