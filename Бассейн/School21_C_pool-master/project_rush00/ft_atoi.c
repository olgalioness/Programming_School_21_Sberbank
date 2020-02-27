/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxhondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 16:16:58 by sxhondo           #+#    #+#             */
/*   Updated: 2019/02/05 11:59:35 by sxhondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		index;
	int		num;
	int		sign;

	num = 0;
	sign = 1;
	index = 0;
	if (str[0] == '-')
	{
		sign = -1;
		index++;
	}
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			break ;
		num = num * 10 + (str[index] - '0');
		index++;
	}
	if (sign == -1)
		num = num * -1;
	return (num);
}
