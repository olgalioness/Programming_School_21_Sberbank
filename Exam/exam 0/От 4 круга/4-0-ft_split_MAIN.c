#include <stdio.h>

char 		**ft_split(char *s);

int	main(void)
{
	int	i = 0;
	char **split_me;

	split_me = ft_split("I dare you to split me!");
	while (i < 6)
	{
		printf("Word %d: %s\n", i, split_me[i]);
		i++;
	}
	return (0);
}
