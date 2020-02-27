/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 09:18:39 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/21 10:46:16 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int 		ft_atoi(char const *str)
{
	unsigned int nb;
	int j;

	j = 1;
	nb = 0;
	while (*str <= 32)
		str++;
	if (*str == '-')
	{
		j = - 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = 10 * nb + (*str - '0');
		str++;
	}
	return (j * nb);
}
