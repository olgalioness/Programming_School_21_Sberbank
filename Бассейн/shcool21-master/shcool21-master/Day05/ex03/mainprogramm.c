#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *str1, str2[60];
	str1 = "Hello bitches!";
	str2[0] = 'h';
	char *r = ft_strcpy(str2, str1);
	printf("%s", r);
	return 0;
}
