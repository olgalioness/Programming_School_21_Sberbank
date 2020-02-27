# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshanae <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/20 18:47:56 by bshanae           #+#    #+#              #
#    Updated: 2019/02/20 19:29:51 by bshanae          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS =	./src/main.c \
		./src/sq.c \
		./src/utils.c \
		./src/valid_b.c \
		./src/solve.c \
		./src/stream.c \
		./src/valid_a.c

OBJS =	main.o \
		sq.o \
		utils.o \
		valid_b.o \
		solve.o \
		stream.o \
		valid_a.o

INCL = ./incl

FLAGS = -Wall -Wextra -Werror -O3

all : $(NAME)

$(NAME) : $(OBJS)
	gcc $(OBJS) -o $(NAME)

$(OBJS) : 
	gcc -I$(INCL) $(FLAGS) $(SRCS) -c

clean : 
	/bin/rm -f $(OBJS)

fclean : clean 
	/bin/rm -f $(NAME)

re : fclean all
