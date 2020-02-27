# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhaired <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 17:20:49 by lhaired           #+#    #+#              #
#    Updated: 2019/08/15 18:48:26 by lhaired          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = display_file.c main.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: clean all
