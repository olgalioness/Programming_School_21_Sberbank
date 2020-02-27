/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 11:45:34 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/07 11:59:29 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	if (*str != '\0')
	{
		count = 0;
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
			count++;
		}
	}
	return (count);
}
