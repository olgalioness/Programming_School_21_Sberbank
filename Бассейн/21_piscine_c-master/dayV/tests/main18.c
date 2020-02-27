unsigned int ft_strlcat(char* dest, char* src, unsigned int size);

#include <stdio.h>
#include <string.h>

int main()
{
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
	printf("%d-", ft_strlcat(test, "asdf", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 6));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 4));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 0));
	printf("%s\n", test);
}
