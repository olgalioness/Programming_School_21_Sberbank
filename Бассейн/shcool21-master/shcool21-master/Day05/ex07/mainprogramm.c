/*



			NOTHING HERE!





*/

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void) {
	printf("Standart: %d", strncmp("Hel1o","Hello",4));
	printf("\nYour: %d", ft_strncmp("Hel1o","Hello",4));
	return 0;
}
