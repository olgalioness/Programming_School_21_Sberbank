#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_strcpy.c"

int   main(void)
{
	printf("==== ex03: ft_strcpy ====\n");
	{
		printf("Main tests\n");

		char ex03_src1[] = "";
		char ex03_dest1[10];
		char ex03_dest1_std[10];

		char ex03_src2[] = "He11o W0rld!";
		char ex03_dest2[13];
		char ex03_dest2_std[13];

		// Должно скопироваться из *src в *dest. также, как и во встроенной версии функции
		printf("1. Should copy and return same result as the built in version\n");
		{
			// ex03_dest1[10];
			// ex03_src1[] = ""
			ft_strcpy(ex03_dest1, ex03_src1);
			assert(strcmp(ex03_dest1, "")==0);

			// ex03_dest1_std[10]
			// ex03_src1[] = ""
			strcpy(ex03_dest1_std, ex03_src1);
			assert(strcmp(ex03_dest1, ex03_dest1_std)==0);

			// ex03_dest2[13]
			// ex03_src2[] = "He11o W0rld!"
			ft_strcpy(ex03_dest2, ex03_src2);
			assert(strcmp(ex03_dest2, "He11o W0rld!")==0);

			// ex03_dest2_std[13]
			// ex03_src2[] = "He11o W0rld!"
			strcpy(ex03_dest2_std, ex03_src2);
			assert(strcmp(ex03_dest2, ex03_dest2_std)==0);
		}
	}
	printf("==== ex03: All tests passed ====\n");

	return (0);
}