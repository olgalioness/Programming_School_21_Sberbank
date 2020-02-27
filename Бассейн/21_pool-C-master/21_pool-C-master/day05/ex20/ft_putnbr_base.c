/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 21:16:13 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/11 23:31:15 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		check_symb(char c)
{
	int n;

	n = (c >= '0' && c <= '9') || (c >= 'a' && c <= 'z');
	if (n || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}

int		check(char *base)
{
	int		i;
	int		j;
	int		c;
	char	s[10000];

	c = 0;
	i = 0;
	while (*(base + i))
	{
		j = 0;
		while (j < c)
		{
			if ((*(base + i) == s[j]) || check_symb(*(base + i)))
				return (0);
			j++;
		}
		if (j == c)
		{
			s[c] = *(base + i);
			c++;
		}
		i++;
	}
	return (i);
}

void	convert_base(int n, int size, char *base)
{
	char	s[65];
	int		i;
	int		c;
	int		k;
	long	n1;

	n1 = n;
	if (n1 < 0)
	{
		ft_putchar('-');
		n1 *= -1;
	}
	i = 0;
	while (n1)
	{
		k = n1 / size;
		c = n1 - k * size;
		s[i] = *(base + c);
		n1 /= size;
		i++;
	}
	while (i-- > 0)
		ft_putchar(s[i]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	size = check(base);
	if (size > 1)
	{
		convert_base(nbr, size, base);
	}
}
