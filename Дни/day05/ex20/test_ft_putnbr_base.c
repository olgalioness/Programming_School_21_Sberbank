#include <stdio.h>

#include "../../ft_putchar.c"
#include "ft_putnbr_base.c"

int main()
{
	printf("==== ex20: ft_putnbr_base ====\n");
	{
		printf("Main tests\n");

		printf("1. Should display nothing in case of invalid arguments\n");
		{
			ft_putnbr_base(15, "");
			ft_putnbr_base(15, "1");
			ft_putnbr_base(15, "144");
			ft_putnbr_base(15, "14+35");
			ft_putnbr_base(15, "145-09");
		}

		printf("2. Should print number in correct radix\n");
		{
			printf("\nBase: '01', expected: '1111'\n");
			ft_putnbr_base(15, "01");

			printf("\nBase: '0123456789', expected: '15'\n");
			ft_putnbr_base(15, "0123456789");

			printf("\nBase: '0123456789ABCDEF', expected 'F'\n");
			ft_putnbr_base(15, "0123456789ABCDEF");

			printf("\nBase: 'fivte3n', expected: 'vi'\n");
			ft_putnbr_base(15, "fivte3n");

			printf("\nBase: '9876543210', expected: '84'\n");
			ft_putnbr_base(15, "9876543210");
			printf("\n\n");
		}

		printf("3. Should handle negative numbers\n");
		{
			printf("\nBase: '01', expected: '-1111'\n");
			ft_putnbr_base(-15, "01");

			printf("\nBase: '0123456789', expected: '-15'\n");
			ft_putnbr_base(-15, "0123456789");

			printf("\nBase: '0123456789ABCDEF', expected: '-F'\n");
			ft_putnbr_base(-15, "0123456789ABCDEF");

			printf("\nBase: 'fivte3n', expected: '-vi'\n");
			ft_putnbr_base(-15, "fivte3n");

			printf("\nBase: '9876543210', expected: '-84'\n");
			ft_putnbr_base(-15, "9876543210");
			printf("\n\n");
		}

		printf("4. Should handle INT_MIN\n");
		{
			printf("\nBase: '0123456789abcdef', expected: '-80000000'\n");
			ft_putnbr_base(-2147483648, "0123456789abcdef");
			printf("\n\n");
		}
	}
	printf("==== ex20: All tests passed ====\n");

	return (0);
}