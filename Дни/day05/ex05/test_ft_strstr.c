#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_strstr.c"

int main ()
{
	printf("==== ex05: ft_strstr ====\n");
	{
		printf("Main tests\n");

		char ex05_haystack[] = "hey stack!";
		char ex05_needle1[] = "";
		char ex05_needle2[] = "stack1";
		char ex05_needle3[] = "stack!";
		char str02[]	= "asdf qwerty qwerty";
		char find02[]	= "wer";

		// Должно вернуть значение haystack, если в needle ничего нет
		printf("1. Should return haystack if needle is empty\n");
		{
			// ex05_haystack[] = "hey stack!"
			// ex05_needle1[] = ""
			ft_strstr(ex05_haystack, ex05_needle1);
			assert(ft_strstr(ex05_haystack, ex05_needle1)==ex05_haystack);
		}

		// Должно вернуть NULL, если ничего не нашел
		printf("2. Should return NULL if not found\n");
		{
			// ex05_haystack[] = "hey stack!"
			// ex05_needle2[] = "stack1"
			ft_strstr(ex05_haystack, ex05_needle2);
			assert(ft_strstr(ex05_haystack, ex05_needle2)==NULL);
		}

		// Должно вернуть c индекса первой буквы, которая совпала
		printf("3. Should return index of first letter matched\n");
		{
			// ex05_haystack[] = "hey stack!"
			// ex05_needle3[] = "stack!"
			ft_strstr(ex05_haystack, ex05_needle3);
			assert(strcmp(ft_strstr(ex05_haystack, ex05_needle3), "stack!")==0);

			// str02[]	= "asdf qwerty qwerty";
			// find02[] = "wer";
			ft_strstr(str02, find02);
			assert(strcmp(ft_strstr(str02, find02), "werty qwerty")==0);
		}
	}
	printf("==== ex05: All tests passed ====\n");

	return(0);
}