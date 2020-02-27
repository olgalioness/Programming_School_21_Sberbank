/*



			NOTHING HERE!





*/
char	*ft_strncpy(char *dest, char *src, unsigned int n);

#include <string.h>
#include <stdio.h>                       /* для printf() */

 int main()
 {
    char *str = "SmallStr";
   char  buf[10] = {0};                  // буфер размером меньше строки

    printf("строка: \"%s\"\n\n", str);
   printf("буфер перед копированием: \"%s\"\n", buf);

    ft_strncpy(buf, str, 9);   // len на 1 меньше размера буфера

   printf("буфер после копирования:  \"%s\"\n", buf);

    return 0;
 }
