#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_strupcase.c"

int main()
{
	printf("==== ex08: ft_strupcase ====\n");
	{
		printf("Main tests\n");

		char ex08_str1[] = "\t ab?%%$#==1343449-)(8";
		char ex08_str2[] = "HELLo WORLd";
		char ex08_str3[] = "aSDF QWERTY ZXCV";

		// Должно произвести конвертацию букв в заглавные
		printf("1. Should convert lower case letters to upper case\n");
		{
			ft_strupcase(ex08_str1);
			assert(strcmp(ft_strupcase(ex08_str1), "\t AB?%%$#==1343449-)(8")==0);

			ft_strupcase(ex08_str2);
			assert(strcmp(ft_strupcase(ex08_str2), "HELLO WORLD")==0);

			ft_strupcase(ex08_str3);
			assert(strcmp(ft_strupcase(ex08_str3), "ASDF QWERTY ZXCV")==0);
		}
	}
	printf("==== ex08: All tests passed ====\n");

	return(0);
}