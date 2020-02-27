/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 10:19:14 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/04 12:11:49 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int integer;
	int sign;
	int index;

	index = 0;
	integer = 0;
	sign = 1;
	while (str[index] == ' ' || str[index] == '\n' || str[index] == '\t'
			|| str[index] == '\v' || str[index] == '\f'
			|| str[index] == '\r')
		index++;
	if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	if (str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		integer = integer * 10 + sign * (str[index] - '0');
		index++;
	}
	return (integer);
}
