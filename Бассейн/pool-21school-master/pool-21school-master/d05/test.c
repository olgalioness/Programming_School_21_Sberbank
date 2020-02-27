/*gcc -Wall -Wextra -Werror -o test test.c norminette -R CheckForbiddenSourceHeader*/
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include "ex14/ft_str_is_uppercase.c"
#include "ex00/ft_putstr.c"
#include "ex01/ft_putnbr.c"

int main ( void )
{
	char a[] = "SSSALMKL";
	char t[] = "cinquante2323+et+AAAun";
	char w[] = "\0";
	ft_putchar('\n');
	ft_putnbr(ft_str_is_uppercase(a));
	ft_putnbr(ft_str_is_uppercase(t));
	ft_putnbr(ft_str_is_uppercase(w));
	return(0);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
