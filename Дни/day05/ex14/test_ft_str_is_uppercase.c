#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_str_is_uppercase.c"

int main()
{
	printf("==== ex14: ft_str_is_uppercase ====\n");
	{
		printf("Main tests\n");
		// Должно вернуть 1, если строка пуста
		printf("1. Should return 1 for empty string\n");
		{
			ft_str_is_uppercase("");
			assert(ft_str_is_uppercase("")==1);
		}

		// Должно вернуть 1, если в строке только заглавные алфавитные символы
		printf("2. Should return 1 for all upper case characters\n");
		{
			ft_str_is_uppercase("XXTTE");
			assert(ft_str_is_uppercase("XXTTE")==1);
		}

		// Должно вернуть 0, если в строке любые другие символы
		printf("3. Should return 0 when there is other character\n");
		{
			ft_str_is_uppercase("ETW Ai");
			assert(ft_str_is_uppercase("ETW Ai")==0);

			ft_str_is_uppercase("erERERete 1231");
			assert(ft_str_is_uppercase("erERERete 1231")==0);
		}
	}
	printf("==== ex14: All tests passed ====\n");

	return (0);
}