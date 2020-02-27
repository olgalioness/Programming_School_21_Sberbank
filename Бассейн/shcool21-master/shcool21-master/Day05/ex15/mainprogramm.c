/*



			NOTHING HERE!





*/

#include <stdio.h>
#include <string.h>

int	ft_strcat(char *str);

int main(void) {
//	printf("Standart: %s", strupcase("Hello my dear old friend!! How Are You?"));
	char str1[] = "First string!";
	char str2[] = "Second!!!";
	char *str = ft_strcat(str1,str2);

	printf("\nYour output: %s", str);
	return 0;
}
