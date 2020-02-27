/*



			NOTHING HERE!





*/

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int main(void) {
//	printf("Standart: %s", strupcase("Hello my dear old friend!! How Are You?"));
	char strr[] = "Hello my dear old friend!! How Are You?";
	char *str = ft_strlowcase(strr);


	printf("\nYour output: %s", str);
	return 0;
}
