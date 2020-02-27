/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 22:52:21 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/02 23:08:29 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

int ft_strlen(char *str)
{
	int count;

	count = 0;
	if (*str != char*)
	{
		count = 0;
		while ( *str != '\0')
		{
			ft_putchar(*str);
			str++;
			count++;
		}
	}
	return count;
}
