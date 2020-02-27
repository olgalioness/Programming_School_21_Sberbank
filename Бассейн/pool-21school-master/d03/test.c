/*gcc -Wall -Wextra -Werror -o test test.c norminette -R CheckForbiddenSourceHeader*/
#include <unistd.h>
#include <stdio.h>

#include "ex09/ft_sort_integer_table.c"

int ft_putchar(char c);

int	main ( void )
{
	int c[6] = {3,2,1,7,6,8};
	ft_sort_integer_table(c,6);
	for (int i = 0; i < 6; i++)
	    printf("%d",c[i]);
//	c = ft_recursive_power(2,0);
//	printf("%d ",c);
//	c = ft_recursive_power(2,-1);
//	printf("%d ",c);
	return(0);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
