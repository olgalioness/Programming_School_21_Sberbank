#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_str_is_numeric.c"

int main()
{
	printf("==== ex12: ft_str_is_numeric ====\n");
	{
		printf("Main tests\n");

		// Должно вернуть 1, если строка пустая
		printf("1. Should return 1 for empty string\n");
		{
			ft_str_is_numeric("");
			assert(ft_str_is_numeric("")==1);
		}

		// Должно вернуть 1, если строка содержит только символы
		printf("2. Should return 1 for all numeric characters\n");
		{
			ft_str_is_numeric("0");
			assert(ft_str_is_numeric("0")==1);

			ft_str_is_numeric("123456");
			assert(ft_str_is_numeric("123456")==1);
		}

		// Должно вернуть 0, если в строке есть другие символы
		printf("3. Should return 0 when there is other character\n");
		{
			ft_str_is_numeric("13141.34");
			assert(ft_str_is_numeric("13141.34")==0);

			ft_str_is_numeric("erete 1231");
			assert(ft_str_is_numeric("erete 1231")==0);

			ft_str_is_numeric("12345asdf");
			assert(ft_str_is_numeric("12345asdf")==0);
		}
	}
	printf("==== ex12: All tests passed ====\n");

	return (0);
}