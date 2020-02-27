#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *str1, char *str2, unsigned int n);

void	test(char *str1, char *str2, unsigned int n)
{
	printf("%s ? %s for %d : ft = %d, lib = %d\n", str1, str2, n, ft_strncmp(str1, str2, n), strncmp(str1, str2, n));
}

int	main()
{
	test("Hello", "Hello world", 20);
	test("Hello world", "Hello", 5);
	test("Same", "same", 3);
	test("ABCDE", "ABCDX", 5);
	test("XXXX", "A", 0);
	
	test("asdf", "asdf", 4);
	test("asde", "asdf", 4);
	test("asdg", "asdf", 4);
	test("asdf", "asdf", 3);
	test("asde", "asdf", 3);
}
