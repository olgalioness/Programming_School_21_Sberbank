#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_strlcat.c"

int main()
{
	printf("==== ex18: ft_strlcat ====\n");
	{
		printf("Main tests\n");
		{
			char ex18_src[50] = {"World!"};
			char ex18_dest1[10] = {"Hello "};
			char ex18_dest2[13] = {"Hello "};
			char ex18_dest3[50] = {"Hello "};

			assert(ft_strlcat(ex18_dest1, ex18_src, 10)==12);
			assert(strcmp(ex18_dest1, "Hello Wo")==0);


			assert(ft_strlcat(ex18_dest2, ex18_src, 13)==12);
			assert(strcmp(ex18_dest2, "Hello Worl")==0);

			assert(ft_strlcat(ex18_dest3, ex18_src, 50)==12);
			assert(strcmp(ex18_dest3, "Hello World!")==0);
		}

		// It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize
		printf("Other tests\n");
		{
			char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";

			assert(ft_strlcat(test, "asdf", 16)==4);
			assert(strcmp(test, "asdf")==0);

			assert(ft_strlcat(test, "asdf", 6)==8);
			assert(strcmp(test, "asdfa")==0);

			assert(ft_strlcat(test, "asdf", 4)==8);
			assert(strcmp(test, "asdfa")==0);

			assert(ft_strlcat(test, "", 16)==5);
			assert(strcmp(test, "asdfa")==0);

			assert(ft_strlcat(test, "asdf", 0)==4);
			assert(strcmp(test, "asdfa")==0);
		}
	}
	printf("==== ex18: All tests passed ====\n");

	return (0);
}