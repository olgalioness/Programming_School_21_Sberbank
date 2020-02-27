#include <stdio.h>

int	ft_str_is_alpha(char *str);

void	test(char *str)
{
	printf("%s : alpha = %d\n", str, ft_str_is_alpha(str));
}

int main()
{
	test("Alphabet");
	test("");
	test("123a");	
	test("asdf");
	test("QWERTY");
	test("asdg1234");
	test("999");
}
