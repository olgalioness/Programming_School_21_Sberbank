#include <stdio.h>

#include "../../ft_putchar.c"
#include "ft_putstr_non_printable.c"

int main()
{
	printf("==== ex22: ft_putstr_non_printable ====\n");
	{
		printf("1. Should print normal string\n");
		{
			printf("Expected: ''\n");
			ft_putstr_non_printable("");
			printf("\n\n");

			printf("Expected: 'The meaning of life is 42.'\n");
			ft_putstr_non_printable("The meaning of life is 42.");
			printf("\n\n");
		}

		printf("2. Should convert nonprintable to hex\n");
		{
			printf("Expected: '\\0a'\n");
			ft_putstr_non_printable("\n");
			printf("\n\n");

			printf("Expected: 'Coucou\\0atu vas bien ?'\n");
			ft_putstr_non_printable("Coucou\ntu vas bien ?");
			printf("\n\n");

			printf("Expected: 'asdf\\7f\\1fhi\\01\\fflol'\n");
			ft_putstr_non_printable("asdf\x7f\x1fhi\x01\xfflol");
			printf("\n");
		}
	}
	printf("==== ex22: All tests passed ====\n");

	return (0);
}