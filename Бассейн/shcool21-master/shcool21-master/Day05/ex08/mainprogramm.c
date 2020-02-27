/*



			NOTHING HERE!





*/

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main(void) {
//	printf("Standart: %s", strupcase("Hello my dear old friend!! How Are You?"));
	char strr[] = "Hello my dear old friend!! How Are You?";
	char *str = ft_strupcase(strr);


	printf("\nYour: %s", str);
	return 0;
}
