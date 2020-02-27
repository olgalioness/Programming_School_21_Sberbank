#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *std);

int	main(void)
{
	int r = ft_atoi("\a99d");
	int rr = atoi("\a99d");
	printf("Atoi return: %d\n",rr);
	printf("Your function return: %d\n",r);
	return 0;
}
