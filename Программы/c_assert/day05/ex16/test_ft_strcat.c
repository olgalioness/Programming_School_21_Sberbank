#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_strcat.c"

int main()
{
	printf("==== ex16: ft_strcat ====\n");
	{
		printf("Main tests\n");
		{
			char ex16_src[50] = {"World!"};

			char ex16_dest[50] = {"Hello "};
			char ex16_std_dest[50] = {"Hello "};

			ft_strcat(ex16_dest, ex16_src);
			assert(strcmp(ex16_dest, "Hello World!")==0);

			strcat(ex16_std_dest, ex16_src);

			assert(strcmp(ex16_dest, ex16_std_dest)==0);

		}

		printf("Other tests\n");
		{
			char test[20] = "";

			// test[20] = ""
			// "asdf"
			ft_strcat(test, "asdf");
			assert(strcmp(test, "asdf")==0);

			// test[20] = "asdf"
			// ""
			ft_strcat(test, "");
			assert(strcmp(test, "asdf")==0);

			// test[20] = "asdf"
			// zxcv
			ft_strcat(test, "zxcv");
			assert(strcmp(test, "asdfzxcv")==0);
		}
	}
	printf("==== ex16: All tests passed ====\n");

	return (0);
}