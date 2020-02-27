NAME = libft.a
SRC = srcs/
FLAGS = -Wall -Wextra -Werror
OPTION = -c 
FILES = $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c $(SRC)ft_strlen.c $(SRC)ft_swap.c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTION) $(FILES)
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all