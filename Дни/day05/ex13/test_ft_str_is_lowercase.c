#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_str_is_lowercase.c"

int main()
{
	printf("==== ex13: ft_str_is_lowercase ====\n");
	{
		printf("Main tests\n");

		// Должно вернуть 1, если строка пуста
		printf("1. Should return 1 for empty string\n");
		{
			ft_str_is_lowercase("");
			assert(ft_str_is_lowercase("")==1);
		}

		// Должно вернуть 1, если все алфавитные символы в строке являются строчными
		printf("2. Should return 1 for all lower case characters\n");
		{
			ft_str_is_lowercase("abcd");
			assert(ft_str_is_lowercase("abcd")==1);
		}

		// Должно вернуть 0, если в строке есть другие символы
		printf("3. Should return 0 when there is other character\n");
		{
			ft_str_is_lowercase("aihi Ai");
			assert(ft_str_is_lowercase("aihi Ai")==0);

			ft_str_is_lowercase("erete 1231");
			assert(ft_str_is_lowercase("erete 1231")==0);
		}
	}
	printf("==== ex13: All tests passed ====\n");

	return (0);
}