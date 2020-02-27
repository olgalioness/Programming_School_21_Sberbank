char* ft_strncat(char* dest, char* src, int nb);

#include <stdio.h>

int main ()
{
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
	printf("%s\n", ft_strncat(test, "asdf", 16));
	printf("%s\n", ft_strncat(test, "", 16));
	printf("%s\n", ft_strncat(test, "qwerty", 0));
	printf("%s\n", ft_strncat(test, "asdf", 3));
}
