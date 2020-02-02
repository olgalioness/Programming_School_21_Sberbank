#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_strcmp.c"

int main ()
{
	printf("==== ex06: ft_strcmp ====\n");
	{
		printf("Main tests\n");

		char ex06_str1[] = "hey stack!";
		char ex06_str2[] = "hey stack0";
		char ex06_str3[] = "hay stack!";
		char ex06_str4[] = "hEy stacl!";
		char ex06_str5[] = "hdz tubbj!";
		char ex06_str6[] = "hdy stack!";
		char ex06_str7[] = "hey stack!";
		char ex06_str8[] = "";
		char ex06_str9[] = "hey";
		char ex06_str10[] = "hey s";
		char ex06_str11[] = "hfz";
		char ex06_str12[] = "";
		char ex06_str13[] = "A";

		// Должно сравнить и вернуть разницу
		printf("1. Should compare and return differences\n");
		{
			// ex06_str1[] = "hey stack!"
			// ex06_str2[] = "hey stack0"
			ft_strcmp(ex06_str1, ex06_str2);
			assert(ft_strcmp(ex06_str1, ex06_str2)==-15);

			// ex06_str1[] = "hey stack!"
			// ex06_str3[] = "hay stack!"
			ft_strcmp(ex06_str1, ex06_str3);
			assert(ft_strcmp(ex06_str1, ex06_str3)==4);

			// ex06_str1[] = "hey stack!"
			// ex06_str4[] = "hEy stacl!"
			ft_strcmp(ex06_str1, ex06_str4);
			assert(ft_strcmp(ex06_str1, ex06_str4)==32);

			// ex06_str1[] = "hey stack!"
			// ex06_str5[] = "hdz tubbj!"
			ft_strcmp(ex06_str1, ex06_str5);
			assert(ft_strcmp(ex06_str1, ex06_str5)==1);

			// ex06_str1[] = "hey stack!"
			// ex06_str6[] = "hdy stack!"
			ft_strcmp(ex06_str1, ex06_str6);
			assert(ft_strcmp(ex06_str1, ex06_str6)==1);

			// ex06_str1[] = "hey stack!"
			// ex06_str7[] = "hey stack!"
			ft_strcmp(ex06_str1, ex06_str7);
			assert(ft_strcmp(ex06_str1, ex06_str7)==0);

			// ex06_str1[] = "hey stack!"
			// ex06_str8[] = ""
			ft_strcmp(ex06_str1, ex06_str8);
			assert(ft_strcmp(ex06_str1, ex06_str8)==104);

			// ex06_str1[] = "hey stack!"
			// ex06_str9[] = "hey"
			ft_strcmp(ex06_str1, ex06_str9);
			assert(ft_strcmp(ex06_str1, ex06_str9)==32);

			// ex06_str1[] = "hey stack!"
			// ex06_str10[] = "hey s"
			ft_strcmp(ex06_str1, ex06_str10);
			assert(ft_strcmp(ex06_str1, ex06_str10)==116);

			// ex06_str1[] = "hey stack!"
			// ex06_str11[] = "hfz"
			ft_strcmp(ex06_str1, ex06_str11);
			assert(ft_strcmp(ex06_str1, ex06_str11)==-1);

			// ex06_str8[] = ""
			// ex06_str12[] = ""
			ft_strcmp(ex06_str8, ex06_str12);
			assert(ft_strcmp(ex06_str8, ex06_str12)==0);

			// ex06_str13[] = "A"
			// ex06_str8[] = ""
			ft_strcmp(ex06_str8, ex06_str13);
			assert(ft_strcmp(ex06_str8, ex06_str13)==-65);
		}
	}
	printf("==== ex06: All tests passed ====\n");

	return (0);
}