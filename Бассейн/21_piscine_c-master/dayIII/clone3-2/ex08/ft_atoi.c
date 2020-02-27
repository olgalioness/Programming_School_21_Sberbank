/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 15:37:37 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/01 09:43:18 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length(char *str);

int	ft_atoi(char *str);

int	length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int res;
	int i;
	int k;

	res = 0;
	i = length(str) - 1;
	k = 1;
	while (i != -1 && str[i] != '-')
	{
		res += (str[i] - '0') * k;
		i--;
		k *= 10;
	}
	if (str[0] == '-')
		res *= -1;
	return (res);
}
