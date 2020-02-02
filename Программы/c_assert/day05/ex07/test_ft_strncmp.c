#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_strncmp.c"

int main()
{
	printf("==== ex07: ft_strncmp ====\n");
	{
		printf("Main tests\n");

		char ex07_str1[] = "hey stack!";
		char ex07_str2[] = "hey st4k0";
		char ex07_str3[] = "hey stack!123456789";

		// Должно сравнить и вернуть разницу
		printf("1. Should compare and return differences\n");
		{
			// ex07_str1[] = "hey stack!"		"hey[!] stack!"
			// ex07_str2[] = "hey st4k0"		"hey[!] stack!"
			// n.3
			ft_strncmp(ex07_str1, ex07_str2, 3);
			assert(ft_strncmp(ex07_str1, ex07_str2, 3)==0);

			// ex07_str1[] = "hey stack!"		"hey s[!]tack!"
			// ex07_str2[] = "hey st4k0"		"hey s[!]t4k0"
			// n.5
			ft_strncmp(ex07_str1, ex07_str2, 5);
			assert(ft_strncmp(ex07_str1, ex07_str2, 5)==0);

			// ex07_str1[] = "hey stack!"		"hey sta[!]ck!"
			// ex07_str2[] = "hey st4k0"		"hey st4[!]k0"
			// n.7
			ft_strncmp(ex07_str1, ex07_str2, 7);
			assert(ft_strncmp(ex07_str1, ex07_str2, 7)==45);

			// ex07_str1[] = "hey stack!"		"hey stack[!]!"
			// ex07_str2[] = "hey st4k0"		"hey st4k0[!]"
			// n.9
			ft_strncmp(ex07_str1, ex07_str2, 9);
			assert(ft_strncmp(ex07_str1, ex07_str2, 9)==45);

			// ex07_str1[] = "hey stack!"		"hey stack![...!]"
			// ex07_str2[] = "hey st4k0"		"hey st4k0[...!]"
			// n.11
			ft_strncmp(ex07_str1, ex07_str2, 11);
			assert(ft_strncmp(ex07_str1, ex07_str2, 11)==45);

			// ex07_str1[] = "hey stack!"		"hey stack![...!]"
			// ex07_str2[] = "hey st4k0"		"hey st4k0[...!]"
			// n.13
			ft_strncmp(ex07_str1, ex07_str2, 13);
			assert(ft_strncmp(ex07_str1, ex07_str2, 13)==45);
		}

		// Должно проигнорировать буквы после указанного значения 'n'
		printf("2. Should ignore characters AFTER 'n'\n");
		{
			// ex07_str1[] = "hey stack!"			"hey stack![!]"
			// ex07_str3[] = "hey stack!123456789"	"hey stack![!]123456789"
			// n.10
			ft_strncmp(ex07_str1, ex07_str3, 10);
			assert(ft_strncmp(ex07_str1, ex07_str3, 10)==0);

			// ex07_str1[] = "hey stack!"			"hey stack![...!]"
			// ex07_str3[] = "hey stack!123456789"	"hey stack!123[!]456789"
			// n.13
			ft_strncmp(ex07_str1, ex07_str3, 13);
			assert(ft_strncmp(ex07_str1, ex07_str3, 13)==-49);

			// ex07_str1[] = "hey stack!"			"hey stack![...!]"
			// ex07_str3[] = "hey stack!123456789"	"hey stack!123456789[...!]"
			// n.99
			ft_strncmp(ex07_str1, ex07_str3, 99);
			assert(ft_strncmp(ex07_str1, ex07_str3, 99)==-49);
		}
	}
	printf("==== ex07: All tests passed ====\n");

	return(0);
}
