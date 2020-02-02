
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					int		ft_atoi_base(char *str, char *base);
				
int main()
{
TEST(ft_atoi_base("-111", "01"), -7);
TEST(ft_atoi_base("-15", "0123456789"), -15);
TEST(ft_atoi_base("15", "0123456789"), 15);
TEST(ft_atoi_base("1", "01234+"), 0);
TEST(ft_atoi_base("1", "012341234"), 0);
TEST(ft_atoi_base("3f", "0123456789abcdef"), 63);
TEST(ft_atoi_base("5", "01234"), 0);
TEST(ft_atoi_base("", "01234"), 0);
TEST(ft_atoi_base("a", "0"), 0);
TEST(ft_atoi_base("a", "0a"), 1);



return 0;
}
