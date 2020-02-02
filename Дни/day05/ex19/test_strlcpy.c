#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_strlcpy.c"

int main()
{
	printf("==== ex19: ft_strlcpy ====\n");
	{
		printf("Main tests\n");
		{
			char ex19_src[50] = {"Hello World!"};

			char ex19_dest1[10];
			char ex19_dest2[13];
			char ex19_dest3[50];

			assert(ft_strlcpy(ex19_dest1, ex19_src, 10)==12);
			assert(strcmp(ex19_dest1, "Hello Wor")==0);

			assert(ft_strlcpy(ex19_dest2, ex19_src, 13)==12);
			assert(strcmp(ex19_dest2, "Hello World!")==0);

			assert(ft_strlcpy(ex19_dest3, ex19_src, 50)==12);
			assert(strcmp(ex19_dest3, "Hello World!")==0);
		}

		// It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize
		printf("Other tests\n");
		{
			char test19[256] = "\0zxcvzxcvzxcvxzcvzxcv";

			assert(ft_strlcpy(test19, "asdf", 16)==4);
			assert(strcmp(test19, "asdf")==0);

			assert(ft_strlcpy(test19, "uiop", 0)==4);
			assert(strcmp(test19, "asdf")==0);

			assert(ft_strlcpy(test19, "qwerty", 4)==6);
			assert(strcmp(test19, "qwe")==0);

			assert(ft_strlcpy(test19, "", 4)==0);
			assert(strcmp(test19, "")==0);
		}
	}
	printf("==== ex19: All tests passed ====\n");

	return (0);
}