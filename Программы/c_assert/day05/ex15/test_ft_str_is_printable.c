#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_str_is_printable.c"

int main()
{
	printf("==== ex15: ft_str_is_printable ====\n");
	{
		printf("Main tests\n");

		// Должно вернуть 1, если строка пуста
		printf("1. Should return 1 for empty string\n");
		{
			ft_str_is_printable("");
			assert(ft_str_is_printable("")==1);
		}

		// Должно вернуть 1, если все символы в строке можно вывести на экран
		printf("2. Should return 1 for all printable characters\n");
		{
			ft_str_is_printable("abcd1234!@#$^&*()_+-=[]{}:;,./<>?XXTTE++++++++");
			assert(ft_str_is_printable("abcd1234!@#$^&*()_+-=[]{}:;,./<>?XXTTE++++++++")==1);
		}

		// Должно вернуть 0, если в строке есть какие-либо другие символы
		printf("3. Should return 0 when there is other character\n");
		{
			ft_str_is_printable("ETW Ai÷\t");
			assert(ft_str_is_printable("ETW Ai÷\t")==0);
			ft_str_is_printable("erERE\\Rete 1231\n");
			assert(ft_str_is_printable("erERE\\Rete 1231\n")==0);
		}
	}
	printf("==== ex15: All tests passed ====\n");

    return (0);
}