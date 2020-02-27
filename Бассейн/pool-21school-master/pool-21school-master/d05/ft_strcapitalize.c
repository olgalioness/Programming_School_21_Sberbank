/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 17:37:49 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/06 21:22:54 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sokr(char *str, int n, int k);

char	*ft_strcapitalize(char *str)
{
	int		n;
	int		k;
	char *rtn;

	n = 0;
	k = 0;
	rtn = str;
	while (*str)
	{
		sokr(*str, n, k);
	}
	return (rtn);
}

void	sokr(char *str, int n, int k)
{
	if (n == 1 && k == 0)
		*(str - 1) = *(str - 1) - 32;
	if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
	{
		n++;
		str++;
	}
	else if (*str >= '0' && *str <= '9')
	{
		while (*str >= '0' && *str <= '9')
		{
			str++;
			k++;
		}
	}
	else
	{
		k = 0;
		n = 0;
		str++;
	}
}
