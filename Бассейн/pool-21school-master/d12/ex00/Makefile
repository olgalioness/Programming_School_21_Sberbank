# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 14:52:12 by qjosmyn           #+#    #+#              #
#    Updated: 2019/08/15 15:00:04 by qjosmyn          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean

NAME = ft_display_file

all: $(NAME)

$(NAME): main.c
	gcc -Wall -Wextra -Werror main.c -o $(NAME)

clean:
	/bin/rm -f *.o 

fclean: clean
	/bin/rm -f $(NAME)


