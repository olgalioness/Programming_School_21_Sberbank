# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oadhesiv <oadhesiv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 17:01:34 by oadhesiv          #+#    #+#              #
#    Updated: 2019/04/02 17:02:16 by oadhesiv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = $(wildcard srcs/*.c)
OBJECTS = $(patsubst srcs/%.c,objs/%.o,$(SOURCES))

FLAGS = -Wall -Wextra -Werror
INCLUDES = -I./includes/

BINARY = ft_display_file

all: prepare compile

prepare:
	mkdir -p objs

compile: $(BINARY)

$(BINARY): $(OBJECTS)
	gcc $(FLAGS) $(INCLUDES) -o $(BINARY) $(OBJECTS)

objs/%.o: srcs/%.c
	gcc $(FLAGS) $(INCLUDES) -c -o $@ $<

clean:
	rm -f $(OBJECTS)
	rm -rfv objs

fclean: clean
	rm -f $(BINARY)

re: fclean all

.PHONY: all prepare compile clean fclean re
