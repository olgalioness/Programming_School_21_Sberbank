/*



			NOTHING HERE!





*/
char	*ft_strstr(char *str, char *to_find);
#include <string.h>
      #include <stdio.h>
      char *string = "This is the test string (for tests)";
      char *cmp = "in";
      int main()
      {
        printf("Result --->> [%s]\n", ft_strstr(string, cmp));
		return 0;
      }
