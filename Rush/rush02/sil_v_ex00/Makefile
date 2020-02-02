# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fboudyaf <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/01 13:57:04 by fboudyaf          #+#    #+#              #
#    Updated: 2018/04/01 14:54:09 by fboudyaf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

SRC = ./srcs/readtrial.c ./srcs/get_dimension.c ./srcs/ft_display_file.c \
		./srcs/rush00.c ./srcs/rush01.c ./rush02.c ./srcs/rush03.c

INC = ./includes/

OBJ = readrial.o get_dimentsion.o ft_display.o rush00.o rush01.o rush02.o \
		rush03.o

COMPI = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		@gcc $(COMPI) -I $(INC) $(SRC)
		@gcc -o $(NAME) $(OBJ)

clean:
		@/bin/rm -f $(OBJ)

fclean: clean
		@/bin/rm -f $(NAME)




