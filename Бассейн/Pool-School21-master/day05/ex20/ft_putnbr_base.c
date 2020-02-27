/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 20:33:36 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/06 20:45:37 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int ans;
	int sign;

	ans = 0;
	while (*str == '\t' || *str == '\n' || *str == '\f'
					|| *str == '\r' || *str == ' ' || *str == '\v')
			str++;
	if (*str == '-')
		return (0);
	else if (*str == '+')
		str++;
	while ((*str >= '0') && (*str <= '9'))
	{
		ans = 10 * ans + (*str - '0');
		str++;
	}
	return (ans);
}	

void ft_putnbr_base(int nbr, char *base)
{
	int bases;

	bases = ft_atoi(base);
	if (nb == 0)
		ft_putchar(0 + 48);
	else
	{
		if (nb < 0)
		{
			t_putchar('-');
			nb *= -1;
		}
		if (nb / bases == 0)
			ft_putchar(nb + 48);
		else
		{
			ft_putnbr(nb / bases);
			ft_putchar(nb % bases + 48);
		}
	}
}
