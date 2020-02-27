SRC = srcs/*.c

SRC_2 = srcs/*.o

NAME = libft.a

all:
	gcc -c srcs/*.c includes/*.h
	ar rc $(NAME) *.o includes/*.gch
	ranlib $(NAME)

clean:
	/bin/rm -rf *.o
	/bin/rm -rf includes/*.gch

fclean:clean
	/bin/rm -rf $(NAME)

re:fclean all
