#include <string.h>
#include <stdio.h>

//char *ft_strncat(char *dest, char *src, int nb);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    const char src1[10]    = "1234567890";
    char dest1[10]   = "12345";

    char src[10]    = "1234567890";
    char dest[10]    = "12345";

    size_t             nb = 2;
    unsigned int     nb2 = 2;
    //strcat(src, dest);
    printf("Str: %ld \n", strlcat(dest1, src1, nb));
    printf("Str: %u", ft_strlcat(dest, src, nb2));
    return (0);
}
