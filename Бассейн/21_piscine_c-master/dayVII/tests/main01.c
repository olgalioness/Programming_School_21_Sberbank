#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

void test(int min, int max)
{
    int i;
    
	printf("Range %d->%d\n", min, max);
    i = 0;
    int *t = ft_range(min, max);
    while (i < (max - min))
    {
		if (t[i] == min || t[i] == max - 1)
			printf("[%d]\t", t[i]);
        else printf("%d\t ", t[i]);
		if ((i + 1) % 15 == 0 && i != 0)
			printf("\n");
        i++;
    }
    printf("\n\n");

	free(t);
}

#include <stdint.h>
#include <inttypes.h>

int main()
{
    test(10, 11);
    test(-9, 18);
    test(0, 0);
    test(19, 100);
    test(-100, -50);

	int* res;
	int i;
	res = ft_range(5, 10);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = ft_range(-20, -15);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = ft_range(100, 101);
	for (i = 0; i < 1; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = ft_range(10, 5);
	printf("%" PRIxPTR "\n", (uintptr_t) res);
}
