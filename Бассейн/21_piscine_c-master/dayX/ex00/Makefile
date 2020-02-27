# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshanae <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 10:23:46 by bshanae           #+#    #+#              #
#    Updated: 2019/02/11 11:08:13 by bshanae          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./srcs/*.c

INCLUDES = ./includes/*.h

OBJECTS = *.o

all : libft

libft :
	gcc -I$(INCLUDES) -c $(SRC) 
	ar -rv libft.a $(OBJECTS)

clean :
	rm -f *.o

fclean : clean
	rm -f libft.a

re : fclean all
