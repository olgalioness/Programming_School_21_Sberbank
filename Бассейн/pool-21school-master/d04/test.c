/*gcc -Wall -Wextra -Werror -o test test.c norminette -R CheckForbiddenSourceHeader*/
#include <unistd.h>
#include <stdio.h>

#include "ex00/ft_iterative_factorial.c"

int ft_putchar(char c);

int	main ( void )
{
	/*name_function*/

	int d;
	int q;
	int c;

	q = 2;
	d = 5;
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
