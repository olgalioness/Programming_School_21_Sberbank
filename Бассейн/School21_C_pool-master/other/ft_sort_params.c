/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klekisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 18:26:05 by klekisha          #+#    #+#             */
/*   Updated: 2019/02/06 20:55:31 by klekisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *s1)
{
	while (*s1)
	{
		ft_putchar(*s1);
		s1++;
	}
	ft_putchar('\n');
}

void	ft_oncesort(char **argv)
{
	char *temp;

	temp = *argv;
	while (*(argv + 1))
	{
		if (ft_strcmp(*argv, *(argv + 1)) > 0)
		{
			temp = *(argv + 1);
			*(argv + 1) = *(argv);
			*argv = temp;
		}
		argv++;
	}
}

int		main(int argc, char **argv)
{
	char **temp2;

	temp2 = argv;
	while (argc > 1)
	{
		argc--;
		ft_oncesort(argv);
		argv = temp2;
	}
	argv = temp2 + 1;
	while (*argv)
	{
		ft_putstr(*argv);
		argv++;
	}
	return (0);
}
