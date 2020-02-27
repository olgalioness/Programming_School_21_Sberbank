#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *str);

int main()
{
	char *t = ft_strdup("Hello");
	printf("%s", t);
	free(t);
	return (0);
}
