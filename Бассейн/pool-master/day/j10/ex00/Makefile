NAME = libft.a
SRC = srcs
PRE = ft
INC = includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)/$(PRE)*.c -I $(INC)
	ar rc $(NAME) $(PRE)*.o
	ranlib $(NAME)

clean:
	rm -f $(PRE)*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
