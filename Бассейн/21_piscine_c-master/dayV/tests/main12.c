#include <stdio.h>

int ft_str_is_numeric(char *str);

void	test(char *str)
{
	printf("%s : num = %d\n", str, ft_str_is_numeric(str));
}

int main()
{
	test("");
	test("10");
	test("-19999");
	test("10a10");
	test("123456");
	test("asdf1234");
	test("0");
	test("1234asdf");
}
