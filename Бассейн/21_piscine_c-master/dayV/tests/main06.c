#include <stdio.h>
#include <string.h>

static int i = 0;

int	ft_strcmp(char* s1, char* s2);

void	test(char *str1, char *str2)
{
	if (ft_strcmp(str1, str2) == strcmp(str1, str2))
		printf("Test %d ok\n", ++i);
	else 
		printf("Test %d fail : s1 = %s, s2 = %s, res = %d, exp = %d\n", ++i, str1, str2, ft_strcmp(str1, str2), strcmp(str1, str2));
}

int main()
{
	test("asdf", "asdf");
	test("asde", "asdf");
	test("asdg", "asdf");
	test("", "");
	test("A", "");
	test("", "A");
}
