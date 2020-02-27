NAME = ft_cat
SRC = srcs/*.c
TMP = *.o

all: $(NAME)

$(NAME):
    gcc -Wall -Wextra -Werror $(SRC) -I $(INC) -o $(NAME)


clean:
    rm -f $(TMP)

fclean: clean
    rm -f $(NAME)

re: fclean all

