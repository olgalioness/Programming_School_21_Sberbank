#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_strcapitalize.c"

int main()
{
	printf("==== ex10: ft_strcapitalize ====\n");
	{
		printf("Main tests\n");

		char ex10_str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
		char ex10_str2[] = "he110?w0r1D+xOxO";
		char ex10_str3[] = "asdf qWeRtY ZXCV 100TIS\n";
		char ex10_str4[] = "asdf-qWeRtY ZXCV 100TIS";

		// Должно написать с заглавной буквы каждое слово в строке
		printf("1. Should capitalize each word in string\n");
		{
			ft_strcapitalize(ex10_str1);
			assert(strcmp(ft_strcapitalize(ex10_str1), "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un")==0);

			ft_strcapitalize(ex10_str2);
			assert(strcmp(ft_strcapitalize(ex10_str2), "He110?W0r1d+Xoxo")==0);

			ft_strcapitalize(ex10_str3);
			assert(strcmp(ft_strcapitalize(ex10_str3), "Asdf Qwerty Zxcv 100tis\n")==0);

			ft_strcapitalize(ex10_str4);
			assert(strcmp(ft_strcapitalize(ex10_str4), "Asdf-Qwerty Zxcv 100tis")==0);
		}
	}
	printf("==== ex10: All tests passed ====\n");

	return (0);
}