/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 00:42:23 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/14 02:12:45 by sjamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int rubb;

	rubb = n;
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && (n - 1))
	{
		s1++;
		s2++;
		n--;
	}
	if (!(*s1 - *s2))
	{
		s1++;
		while ((*s1 == ' ' || *s1 == '\n' || *s1 == '\t' ||
				*s1 == '\v' || *s1 == '\f' || *s1 == '\r'))
			s1++;
		if (!(*s1))
			return (0);
		else
			return (1);
	}
	return (*s1 - *s2);
}

void	ft_spy(int argc, char *argv[])
{
	int i;
	int flag;

	flag = 0;
	i = 1;
	while (i < argc)
	{
		while (*argv[i] && (*argv[i] == ' ' || *argv[i] == '\n'
					|| *argv[i] == '\t' || *argv[i] == '\v' || *argv[i] == '\f'
					|| *argv[i] == '\r'))
			argv[i]++;
		ft_strlowcase(argv[i]);
		if (!ft_strncmp(argv[i], "president", 9))
			flag = 1;
		else if (!ft_strncmp(argv[i], "attack", 6))
			flag = 1;
		else if (!ft_strncmp(argv[i], "bauer", 5))
			flag = 1;
		if (flag)
		{
			write(1, "Alert!!!\n", 9);
			return ;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	ft_spy(argc, argv);
	return (0);
}
