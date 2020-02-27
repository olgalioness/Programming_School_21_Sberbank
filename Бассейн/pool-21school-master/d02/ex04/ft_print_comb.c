
#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_comb(void);
void    ft_output(char i, char j, char k);

int	main()
{
	ft_print_comb();
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;


	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				if (i != j && i != k && j != k && k > i && k > j && j > i)
				    ft_output(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}

void    ft_output(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i == '7' && j == '8' && k == '9')
	    return ;
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
