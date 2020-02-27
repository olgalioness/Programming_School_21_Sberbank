#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfork <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/20 14:36:35 by rfork             #+#    #+#              #
#    Updated: 2019/08/21 17:05:55 by rfork            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = bsq
SRCS = ./srcs/ft_1_to_2.c ./srcs/ft_bsq.c ./srcs/ft_change_types.c\
	    ./srcs/ft_fn.c ./srcs/ft_len.c ./srcs/ft_write.c ./srcs/main.c\
		./srcs/ft_check.c

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS)

clean:

fclean: clean
	@rm $(NAME)

re: fclean all