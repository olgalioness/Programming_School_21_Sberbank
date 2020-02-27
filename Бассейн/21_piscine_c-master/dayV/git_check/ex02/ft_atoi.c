/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 16:59:49 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/04 14:19:16 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	pre_symbols(char *str, int *sign)
{
	if (*str == '\t' || *str == '\n' || *str == '\v' ||
		*str == '\f' || *str == '\r' || *str == ' ')
		return (1);
	if (*str == '-' && (*(str + 1) >= '0' && *(str + 1) <= '9'))
	{
		*sign = -1;
		return (1);
	}
	if ((*str == '+' || *str == '-') &&
		!(*(str + 1) >= '0' && *(str + 1) <= '9'))
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int res;
	int i;
	int sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (pre_symbols(str, &sign) == 0)
			return (0);
		else if (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - '0');
			if (str[i + 1] < '0' || str[i + 1] > '9')
				return (res * sign);
		}
		i++;
	}
	return (0);
}
