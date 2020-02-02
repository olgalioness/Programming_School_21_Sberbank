#include <stdio.h>
#include <assert.h>
#include <string.h>

#include "ft_strncpy.c"

int main ()
{
	printf("==== ex04: ft_strncpy ====\n");
	{
		printf("Main tests\n");

		char ex04_src1[] = "";
		char ex04_dest1[10];
		char ex04_dest1_std1[10];
		char ex04_dest1_std2[10];

		char ex04_src2[] = "He11o W0rld!";
		char ex04_dest2[20];
		char ex04_dest2_std1[20];
		char ex04_dest2_std2[20];

		// Должно скопировать из *src и вставить в *dest
		printf("1. Should copy and paste\n");
		{
			// ex04_dest1_std1[10]
			// ex04_src1[] = "" ~ копируем пустую строку
			// n.1
			strncpy(ex04_dest1_std1, ex04_src1, 1);
			assert(strcmp(ex04_dest1_std1, "")==0);
			// ex04_dest1[10]
			// ex04_src1[] = "" ~ копируем пустую строку
			// n.1
			ft_strncpy(ex04_dest1, ex04_src1, 1);
			assert(strcmp(ex04_dest1, "")==0);

			// ex04_dest2_std1[20]
			// ex04_src2[] = "He11o W0rld!"
			// n.13
			strncpy(ex04_dest2_std1, ex04_src2, 13);
			assert(strcmp(ex04_dest2_std1, "He11o W0rld!")==0);
			// ex04_dest2[20];
			// ex04_src2[] = "He11o W0rld!"
			// n.13
			ft_strncpy(ex04_dest2, ex04_src2, 13);
			assert(strcmp(ex04_dest2, "He11o W0rld!")==0);

			// ex04_dest1[] = ""
			// ex04_dest1_std1[] = ""
			assert(strcmp(ex04_dest1, ex04_dest1_std1)==0);

			// ex04_dest2[] = "He11o W0rld!"
			// ex04_dest2_std1[] = "He11o W0rld!"
			assert(strcmp(ex04_dest2, ex04_dest2_std1)==0);
		}

		// Должно заполнить строку, если сама строка короче n
		printf("2. Should fill if str is shorter than n\n");
		{
			// ex04_dest1[] = ""
			// ex04_src1[] = ""
			// n.2
			ft_strncpy(ex04_dest1, ex04_src1, 2);
			assert(strcmp(ex04_dest1, "")==0);

			// ex04_dest1, ""
			// ex04_dest1_std2[10]
			// n.2
			strncpy(ex04_dest1_std2, ex04_src1, 2);
			assert(strcmp(ex04_dest1, ex04_dest1_std2)==0);

			// ex04_dest2[] = "He11o W0rld!"
			// ex04_src2[] = "He11o W0rld!"
			// n.20
			ft_strncpy(ex04_dest2, ex04_src2, 20);
			assert(strcmp(ex04_dest2, "He11o W0rld!")==0);

			// ex04_dest2_std2[20]
			// ex04_src2[] = "He11o W0rld!"
			// n.20
			strncpy(ex04_dest2_std2, ex04_src2, 20);
			assert(strcmp(ex04_dest2, ex04_dest2_std2)==0);
		}

		// Что если n < длина строки?
		printf("3. What if n < len(str)?\n");
		{
			// ex04_dest2[] = "He11o W0rld!"
			ft_strncpy(ex04_dest2, "YY", 1);
			assert(strcmp(ex04_dest2, "Ye11o W0rld!")==0);

			// ex04_dest2_std2[] = "He11o W0rld!"
			strncpy(ex04_dest2_std2, "YY", 1);
			assert(strcmp(ex04_dest2, ex04_dest2_std2)==0);
		}
	}
	printf("==== ex04: All tests passed ====\n");

	return (0);
}