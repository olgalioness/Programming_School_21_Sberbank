/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 17:16:47 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/07 18:54:36 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s2 - *s1);
	}
	return (0);
}

void	ft_prtpar(char **argv)
{
	int i;

	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*buf;

	i = 1;
	while (argv[i] && i < argc)
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[j], argv[i]) > 0)
			{
				buf = argv[i];
				argv[i] = argv[j];
				argv[j] = buf;
			}
			j++;
		}
		i++;
	}
	ft_prtpar(argv);
	return (0);
}
