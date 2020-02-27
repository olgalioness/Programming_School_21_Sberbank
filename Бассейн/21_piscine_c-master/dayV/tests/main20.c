#include <stdio.h>

void	ft_putnbr_base(int nbr, char* base);

int main()
{

		ft_putnbr_base(40, "0123456789abcdef");
		printf("\n");
//		$expected = "28";
		ft_putnbr_base(31, "0123456789abcdef");
		printf("\n");
//		$expected = "1f";
		ft_putnbr_base(15, "01");
		printf("\n");
//		$expected = '1111';
		ft_putnbr_base(-15, "0123456789");
		printf("\n");
		ft_putnbr_base(-16, "01");
		printf("\n");
//		$expected = '-15-10000';
		ft_putnbr_base(2147483647, "0123456789abcdef");
		printf("\n");
		ft_putnbr_base(-2147483648, "0123456789abcdef");
//		$expected = '7fffffff-80000000';
}
