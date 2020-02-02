#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_str_is_alpha.c"

int main()
{
	printf("==== ex11: ft_str_is_alpha ====\n");
	{
		printf("Main tests\n");

		// Должно вернуть 1, если строка пустая
		printf("1. Should return 1 for empty string\n");
		{
			ft_str_is_alpha("");
			assert(ft_str_is_alpha("")==1);
		}

		// Должно вернуть 1, если в строке только алфавитные символы
		printf("2. Should return 1 for all alphabetical characters\n");
		{
			ft_str_is_alpha("aaUUUrRE");
			assert(ft_str_is_alpha("aaUUUrRE")==1);
		}

		// Должно вернуть 0, если в строке любые другие символы
		printf("3. Should return 0 when there is other character\n");
		{
			ft_str_is_alpha("aahtui heUUUrRE");
			assert(ft_str_is_alpha("aahtui heUUUrRE")==0);

			ft_str_is_alpha("12ER");
			assert(ft_str_is_alpha("12ER")==0);

			ft_str_is_alpha("'999'");
			assert(ft_str_is_alpha("'999'")==0);
		}
	}
	printf("==== ex11: All tests passed ====\n");

	return (0);
}