#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
	return (0);
}
