# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshanae <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/13 12:17:25 by bshanae           #+#    #+#              #
#    Updated: 2019/02/13 13:35:13 by bshanae          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAG = -Wall -Wextra -Werror
HEAD = ./include
SRC = ./src/*.c

all : $(NAME) 

$(NAME) : 
	gcc -I$(HEAD) $(FLAG) -o $(NAME) $(SRC)
	
clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
