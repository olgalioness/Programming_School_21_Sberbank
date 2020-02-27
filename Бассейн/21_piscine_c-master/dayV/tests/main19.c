#include <stdio.h>

unsigned int ft_strlcpy(char* dest, char* src, unsigned int size);

int main()
{
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
	printf("%d-", ft_strlcpy(test, "asdf", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcpy(test, "uiop", 0));
	printf("%s\n", test);
	printf("%d-", ft_strlcpy(test, "qwerty", 4));
	printf("%s\n", test);
	printf("%d-", ft_strlcpy(test, "", 4));
	printf("%s\n", test);
}
