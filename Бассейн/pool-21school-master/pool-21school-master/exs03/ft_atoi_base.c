/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:49:22 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/22 19:18:33 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int a, int n)
{
	int result;

	while (n)
	{
		result = result * a;
		n--;
	}
	return (result);
}

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] && ((str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= 'A' && str[i] <= 'F')
				|| (str[i] >= 'a' && str[i] <= 'f')))
		i++;
	return (i);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	if (str_base > 16)
		return (0);
	if (str_base >= 10)
		str_base = 'A' + (str_base - 10) - '0';
	while (str[i] <= 32)
		i++;
	while (str[i] >= '0' && str[i] <= ('0' + str_base))
	{
		if (str[i] >= '0' && str[i] <= '9')
			nbr = nbr + (str[i] - 48) * ft_power(str_base,ft_len(str) - i);
		else if (str[i] >= 'A' && str[i] <= 'F')
			nbr = nbr + (str[i] - 65) * ft_power(str_base,ft_len(str) - i);
		else if (str[i] >= 'a' && str[i] <= 'f')
			nbr = nbr + (str[i] - 97) * ft_power(str_base,ft_len(str) - i);
		else
			break;
		i++;
	}
	return (nb);
}
