#include <stdio.h>

void ft_putstr(char *str);
char	*ft_rot42(char *str);

int main() {
	char k[5] = "ZZZzz";
	ft_putstr(ft_rot42(k));
	return 0;
}
