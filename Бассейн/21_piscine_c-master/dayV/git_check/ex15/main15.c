#include <stdio.h>

int ft_str_is_printable(char *str);

void	test(char *str)
{
	printf("%s : num = %d\n", str, ft_str_is_printable(str));
}

int main()
{
	test("asdf");
	test("\t\n");
}
