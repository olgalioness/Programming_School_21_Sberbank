/*gcc -Wall -Wextra -Werror -o test test.c norminette -R CheckForbiddenSourceHeader*/
#include <unistd.h>
#include <stdio.h>
#include "ex01/ft.h"

int		main(void)
{
	ft_putstr("1234");
	return(0);
}

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
