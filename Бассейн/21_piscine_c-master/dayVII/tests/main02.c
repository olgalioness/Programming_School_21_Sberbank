#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

void 	test(int min, int max)
{
    int i;
    
    printf("Range %d->%d\n", min, max);
    i = 0;
    int *t;
	ft_ultimate_range(&t, min, max);
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
}

int 	main()
{
    test(10, 11);
    test(-9, 18);
    test(0, 0);
    test(19, 100);
    test(-100, -50);

	printf("======= UNIT-TESTS =======\n");

	int* res = NULL;
	int i;
	int size;

	size = ft_ultimate_range(&res, 5, 10);
	printf("is_null? %d\n", res == NULL);
	printf("size is %i\n", size);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = NULL;
	size = ft_ultimate_range(&res, -20, -17);
	printf("is_null? %d\n", res == NULL);
	printf("size is %i\n", size);
	for (i = 0; i < 3; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = (int*)1;
	size = ft_ultimate_range(&res, 10, 5);
	printf("is_null? %d\n", res == NULL);
	printf("size is %i\n", size);
}
