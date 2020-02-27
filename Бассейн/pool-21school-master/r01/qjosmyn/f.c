/*gcc -Wall -Wextra -Werror -o test test.c norminette -R CheckForbiddenSourceHeader*/
#include <unistd.h>
#include <stdio.h>
#include <string.h>
//#include "ex00/ft_strdup.c"

//int     ft_ultimate_range(int **range, int min, int max);
//int     *ft_range(int min, int max);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
//char	*ft_concat_params(int argc, char **argv);
char    **ft_split_whitespaces(char *str);
int     ft_strlen(char *str);
int     ft_len_word(char *str);

int main (void)
{
	int i;
	int j;
//	char *c;
//	c = ft_concat_params(argc,argv);
//	ft_putstr(c);
	char **s;
	char q[] = "lala\nKEK LOL\tCHEBUREK\nAPelsin aaaa";
	char *d, *k;
//	char q[] = "If your program doesn’ t0. j j j j ";
	i = 0;
	j = 0;
	d = q;
	k = d;
	ft_putstr(d);
	ft_putchar('\n');
	ft_putchar('\n');
	while (*d != '\0')
	{
		ft_putnbr(ft_strlen(d));
		while (*d != '\n' && *d != ' ' && *d != '\t' && *d != '\0')
		{
			ft_putchar(*d);
			d++;
		}
		ft_putchar('\n'); 
		d++;
	}
	d = k;
	s = ft_split_whitespaces(d);
	ft_putchar('\n');
	while (s[i] != '\0')
	{
		ft_putstr(s[i]);
		i++;
		ft_putchar('\n');
	}
	return(0);
}

