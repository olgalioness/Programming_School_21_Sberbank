/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:39:22 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/26 21:13:23 by edrowzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	mem_free(int **arr, t_fline test)
{
	int i;

	i = 0;
	while (i < test.rows_count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strconcat(char *s1, char *s2)
{
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(s1);
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		ft_strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		++len;
		s++;
	}
	return (len);
}

int		ft_atoi(char *str)
{
	int plus;
	int num;

	plus = 1;
	num = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
				*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
		plus = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			num = (num * 10) + (*str++ - '0');
		else
			break ;
	}
	num = num * plus;
	return (num);
}
