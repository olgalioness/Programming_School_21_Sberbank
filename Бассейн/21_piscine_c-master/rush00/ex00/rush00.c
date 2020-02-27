void	ft_putchar(char c);

void	ft_putline(int x, char c_s, char c_m, char c_e)
{
	int i;

	i = 0;
	while (++i <= x)
		if (i == 1)
			ft_putchar(c_s);
		else if (i == x)
			ft_putchar(c_e);
		else
			ft_putchar(c_m);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int j;

	j = 0;
	while (++j <= y)
		if (j == 1)
			ft_putline(x, 'o', '-', 'o');
		else if (j == y)
			ft_putline(x, 'o', '-', 'o');
		else
			ft_putline(x, '|', ' ', '|');
}
