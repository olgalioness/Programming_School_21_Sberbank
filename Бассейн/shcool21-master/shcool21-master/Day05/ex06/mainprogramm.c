/*



			NOTHING HERE!





*/

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int main(void) {
	printf("Standart: %d", strcmp("Hello","Hello"));
	printf("\nYour: %d", ft_strcmp("Hello","Hello"));
	return 0;
}
