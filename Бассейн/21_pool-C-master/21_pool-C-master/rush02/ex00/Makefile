NAME = rush-2

FLAGS = -Wall -Wextra -Werror

SRCS = main.c ft_putnbr.c str_read.c

DR = old_rushs/

RSRC = $(DR)rush00.c $(DR)rush01.c  $(DR)rush02.c \
	 $(DR)rush03.c  $(DR)rush04.c

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRCS) $(RSRC)

all : $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
