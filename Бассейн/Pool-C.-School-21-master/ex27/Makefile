NAME = ft_display_file
INC = ft_inc.h
FILE = ft_display_file.c
OBJ = $(FILE: %.c = %.o)
all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror $(FILE) -I $(INC) -c
		gcc $(OBJ) -o $(NAME)
clean:
		@rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
