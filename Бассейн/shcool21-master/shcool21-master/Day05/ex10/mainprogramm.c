/*



			NOTHING HERE!





*/

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int main(void) {
//	printf("Standart: %s", strupcase("Hello my dear old friend!! How Are You?"));
	char strr[] = "hello-my=dear+old 77fr7iend!! ho7w ARe Y8u?";
	char *str = ft_strcapitalize(strr);


	printf("\nYour output: %s", str);
	return 0;
}
