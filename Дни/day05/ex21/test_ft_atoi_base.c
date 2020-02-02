#include <stdio.h>
#include <assert.h>

#include "ft_atoi_base.c"

int main()
{
	printf("==== ex21: ft_atoi_base ====\n");
	{
		printf("1. Should return 0 in case of invalid arguments\n");
		{
			assert(ft_atoi_base("15", "")==0);
			assert(ft_atoi_base("15", "1")==0);
			assert(ft_atoi_base("15", "144")==0);
			assert(ft_atoi_base("15", "14+35")==0);
			assert(ft_atoi_base("15", "145-09")==0);
			assert(ft_atoi_base("", "14509")==0);
			assert(ft_atoi_base("x15", "14509")==0);
			assert(ft_atoi_base("+157", "14509")==0);
		}

		printf("2. Should print number in correct radix\n");
		{
			assert(ft_atoi_base("+1111", "01")==15);
			assert(ft_atoi_base("+15", "0123456789")==15);
			assert(ft_atoi_base("+F", "0123456789ABCDEF")==15);
			assert(ft_atoi_base("+vi", "fivte3n")==15);
			assert(ft_atoi_base("+84", "9876543210")==15);
		}

		printf("3. Should handle negative numbers\n");
		{
			assert(ft_atoi_base("-1111", "01")==-15);
			assert(ft_atoi_base("-15", "0123456789")==-15);
			assert(ft_atoi_base("-F", "0123456789ABCDEF")==-15);
			assert(ft_atoi_base("-vi", "fivte3n")==-15);
			assert(ft_atoi_base("-84", "9876543210")==-15);
		}
	}
	printf("==== ex21: All tests passed ====\n");

	return (0);
}