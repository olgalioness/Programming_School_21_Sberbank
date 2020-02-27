#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main()
{
	char a[] = "A word is a string of alphanumeric characters.";
	char b[] = "tHIS iS bAD cAPSlOCK";
	char c[] = "12word 0wordtoo -1wordooooo * BBBBBBBBBBBBB";
	char d[] = "---- aAAA --- a --- A";

	printf("%s\n", ft_strcapitalize(a));
	printf("%s\n", ft_strcapitalize(b));
	printf("%s\n", ft_strcapitalize(c));
	printf("%s\n", ft_strcapitalize(d));

	char str[] = "asdf qWeRtY ZXCV 100TIS\n";
	printf("%s", ft_strcapitalize(str));
	char str2[] = "asdf-qWeRtY ZXCV 100TIS";
	printf("%s", ft_strcapitalize(str2));
}
