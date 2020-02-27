#!/bin/sh
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_putstr.c ft_swap.c ft_strcmp.c ft_strlen.c ft_strstr.c ft_strncpy.c ft_strcpy.c ft_bubble_sort.c
ar rcs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_strcmp.o ft_strstr.o ft_strncpy.o ft_strcpy.o ft_bubble_sort.o
rm -Rf ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o ft_strstr.o ft_strncpy.o ft_strcpy.o ft_bubble_sort.o