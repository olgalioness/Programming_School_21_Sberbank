/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 19:51:31 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/21 16:55:04 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int ans;
	int sign;

	ans = 0;
	sign = 1;
	while (*str == '\t' || *str == '\n' || *str == '\f'
			|| *str == '\r' || *str == ' ' || *str == '\v')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ((*str >= '0') && (*str <= '9'))
	{
		ans = 10 * ans + (*str - '0');
		str++;
	}
	return (ans * sign);
}
