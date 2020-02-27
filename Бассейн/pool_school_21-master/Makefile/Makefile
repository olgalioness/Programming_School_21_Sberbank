# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhaired <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 15:55:46 by lhaired           #+#    #+#              #
#    Updated: 2019/08/18 22:28:35 by lhaired          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC0 = srcs/*.c
SRC1 = *.o 
HEAD = includes/*.h

all: $(NAME) clean

$(NAME):
	gcc -c $(SRC0) -I $(HEAD)
	ar rc $(NAME) $(SRC1)
	ranlib $(NAME)

clean:
	/bin/rm -f $(SRC1)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean $(NAME) clean
