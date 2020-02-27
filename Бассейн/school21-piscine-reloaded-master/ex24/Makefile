# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 16:35:46 by oadhesiv          #+#    #+#              #
#    Updated: 2019/04/02 16:51:04 by oadhesiv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = $(wildcard srcs/*.c)
OBJECTS = $(patsubst srcs/%.c,objs/%.o,$(SOURCES))

FLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes/

BINARY = libft.a

all: prepare compile

prepare:
	mkdir -p objs

compile: $(BINARY)

$(BINARY): $(OBJECTS)
	ar rc $(BINARY) $(OBJECTS)

objs/%.o: srcs/%.c
	gcc $(FLAGS) $(INCLUDES) -c -o $@ $<

clean:
	rm -f $(OBJECTS)
	rm -rfv objs

fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all prepare compile clean fclean re
