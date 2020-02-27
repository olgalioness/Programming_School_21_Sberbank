#include <stdio.h>

int ft_str_is_lowercase(char *str);

void	test(char *str)
{
	printf("%s : num = %d\n", str, ft_str_is_lowercase(str));
}

int main()
{
	test("");
	test("a");
	test("AaA");
	test("10a10");
	test("1234asdf");
}
