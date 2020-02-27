# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snorcros <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 12:03:09 by snorcros          #+#    #+#              #
#    Updated: 2019/08/17 14:26:43 by snorcros         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = ft_cat.c
SRC0 = ft_cat.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	/bin/rm -f $(SRC0)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
