#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_strlowcase.c"

int main()
{
	printf("==== ex09: ft_strlowcase ====\n");
	{
		printf("Main tests\n");

		char ex09_str1[] = "\t AB?%%$#==1343449-)(8";
		char ex09_str2[] = "hellO worlD";
		char ex09_str3[] = "asdf qWeRtY ZXCV";

		// Должно произвести конвертацию букв в строчные
		printf("1. Should convert upper case letters to lower case\n");
		{
			ft_strlowcase(ex09_str1);
			assert(strcmp(ft_strlowcase(ex09_str1), "\t ab?%%$#==1343449-)(8")==0);

			ft_strlowcase(ex09_str2);
			assert(strcmp(ft_strlowcase(ex09_str2), "hello world")==0);

			ft_strlowcase(ex09_str3);
			assert(strcmp(ft_strlowcase(ex09_str3), "asdf qwerty zxcv")==0);
		}
	}
	printf("==== ex09: All tests passed ====\n");
	
	return (0);
}