# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snorcros <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 12:55:30 by snorcros          #+#    #+#              #
#    Updated: 2019/08/12 21:19:49 by snorcros         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_putnbr.c srcs/main.c srcs/ft_atoi.c srcs/operations.c
HEADER = includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -I $(HEADER)

clean:
	/bin/rm -f $(NAME)

re: clean all
