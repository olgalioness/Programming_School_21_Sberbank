# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhaired <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/19 14:32:27 by lhaired           #+#    #+#              #
#    Updated: 2019/08/19 15:42:04 by lhaired          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = srcs/*.c
HEAD = includes/*.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(src0) -L. -lft -llist

clean:
	/bin/rm -f $(NAME)

re: clean $(NAME)
	
