# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjeromy <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/17 20:10:45 by tjeromy           #+#    #+#              #
#    Updated: 2019/02/17 20:51:13 by tjeromy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
FLAGS = -Wall -Wextra -Werror
CFILES = analyzer_funcs.c analyzer_pattern.c main.c term_utils.c analyzer_dimensions.c analyzer_lines.c print_utils.c str_utils.c utils.c
OFILES = analyzer_funcs.o analyzer_pattern.o main.o term_utils.o analyzer_dimensions.o analyzer_lines.o print_utils.o str_utils.o utils.o

all: makeo
	gcc -o ${NAME} ${FLAGS} ${OFILES}

makeo:
	gcc -c ${FLAGS} ${CFILES}

clean:
	rm -f ${OFILES}

fclean: clean
	rm -f ${NAME} 

re: fclean all