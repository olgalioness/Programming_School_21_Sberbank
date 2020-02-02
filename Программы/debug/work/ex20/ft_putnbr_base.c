/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 05:48:53 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/19 05:48:53 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		is_valid_base2(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && i != j)
			{
				return (0);
			}
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		i++;
	}
	return (i > 1 ? i : 0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				radix;
	int				i;
	unsigned int	abs_n;
	char			digits[50];

	radix = is_valid_base2(base);
	if (radix == 0)
		return ;
	i = 0;
	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	if (nbr < 0)
		ft_putchar('-');
	abs_n = nbr < 0 ? -((unsigned int)(nbr)) : (unsigned int)(nbr);
	while (abs_n >= 1)
	{
		digits[i++] = base[abs_n % radix];
		abs_n = abs_n / radix;
	}
	while (i > 0)
		ft_putchar(digits[--i]);
}