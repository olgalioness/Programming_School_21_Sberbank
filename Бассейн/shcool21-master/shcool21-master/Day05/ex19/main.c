#include <string.h>
#include <stdio.h>

//char *ft_strncat(char *dest, char *src, int nb);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
    const char src1[10]    = "ab";
    char dest1[10]   = "123";

    char src[10]    = "ab";
    char dest[10]    = "123";

    size_t             nb = 2;
    unsigned int     nb2 = 2;
    //strcat(src, dest);
    printf("Str: %ld \n", strlcpy(dest1, src1, nb));
    printf("Str: %u", ft_strlcpy(dest, src, nb2));
    return (0);
}
