/*



			NOTHING HERE!





*/

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main(void) {
	char str1[] = "First string!";
	char str2[] = "Second!!!";
	char *str = ft_strcat(str1,str2);

	printf("\nYour output: %s", str);
	return 0;
}
