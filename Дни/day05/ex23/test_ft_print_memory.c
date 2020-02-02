#include "stdio.h"

#include "../../ft_putchar.c"
#include "ft_print_memory.c"

int main()
{
	printf("==== ex23: ft_print_memory ====\n");
	{
		printf("Expected: \n00000000: 6173 6466 6173 6466 7177 6572 7479 7479  asdfasdfqwertyty\n00000010: 7a78 6376 7a78 6376 0000 ff7f 01         zxcvzxcv.....\n\n");
		ft_print_memory("asdfasdfqwertytyzxcvzxcv\0\0\xff\x7f\x01", 29);
	}
	printf("==== ex23: All tests passed ====\n");

	return (0);
}