#include "file1.c"
#include "file2.c"
#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"
#include "file3.c"
#include "open_couples.c"

void    print_3d(char ***str, int prov); //prov == 1 -> 3d, prov != 1 -> 2d
int main(int argc, char **argv)
{
	int n;
	int i;
	int j;
	char ***str = NULL;
	i = 0;
	j = 1;
	argc = 1;
	while (argv[j])
	{
		printf(" %s \n",argv[j]);
		j++;

	}
	printf("\n");
	n = 10;
	str = ft_memory_allocation();
	printf("work\n");
	ft_all_value(str, argv, 0 ,0);
	printf("work\n");
//	ft_check_all(str);
//	printf("work\n");
	n = ft_search(str, 0, 0);
	print_3d(str,1);

}
void	print_3d(char ***str, int prov)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (prov == 1)
				printf("%s\n",str[i][j]);
			else
				printf("%c|",str[i][j][0]);
			j++;
		}
		i++;
		printf("\n---------\n");
	}
}
