#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_strncat.c"

int main()
{
	printf("==== ex17: ft_strncat ====\n");
	{
		printf("Main tests\n");
		{
			char ex17_src[50] = {"World!"};

			char ex17_dest1[50] = {"Hello "};
			char ex17_dest2[50] = {"Hello "};
			char ex17_dest3[50] = {"Hello "};

			char ex17_std_dest1[50] = {"Hello "};
			char ex17_std_dest2[50] = {"Hello "};
			char ex17_std_dest3[50] = {"Hello "};

			ft_strncat(ex17_dest1, ex17_src, 0);
			assert(strcmp(ex17_dest1, "Hello ")==0);
			strncat(ex17_std_dest1, ex17_src, 0);
			assert(strcmp(ex17_dest1, ex17_std_dest1)==0);

			ft_strncat(ex17_dest2, ex17_src, 6);
			assert(strcmp(ex17_dest2, "Hello World!")==0);
			strncat(ex17_std_dest2, ex17_src, 6);
			assert(strcmp(ex17_dest2, ex17_std_dest2)==0);

			ft_strncat(ex17_dest3, ex17_src, 30);
			assert(strcmp(ex17_dest3, "Hello World!")==0);
			strncat(ex17_std_dest3, ex17_src, 30);
			assert(strcmp(ex17_dest3, ex17_std_dest3)==0);
		}

		printf("Other tests\n");
		{
			char test1[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";

			// test1[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv"
			// "asdf"
			// n.3
			ft_strncat(test1, "asdf", 3);
			assert(strcmp(test1, "asd")==0);

			// test2[256] = "asd"
			// ""
			// n.16
			ft_strncat(test1, "", 16);
			assert(strcmp(test1, "asd")==0);

			// test[256] = "asd"
			// "qwerty"
			// n.0
			ft_strncat(test1, "qwerty", 0);
			assert(strcmp(test1, "asd")==0);

			// test[256] = "asd"
			// "asdfasd"
			// n.4
			ft_strncat(test1, "asdfasd", 4);
			assert(strcmp(test1, "asdasdf")==0);
		}
	}
	printf("==== ex17: All tests passed ====\n");

	return (0);
}