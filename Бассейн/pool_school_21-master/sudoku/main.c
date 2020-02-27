/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pluton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 21:10:08 by pluton            #+#    #+#             */
/*   Updated: 2019/08/11 22:13:00 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_put.h"

void	ft_fillceil(t_ceil *tab, char *str)
{
	int i;

	i = 0;
	if (*str != '.')
		tab->value = *str - '0';
	else
		tab->value = 0;
	i = 0;
	tab->variant = (int *)malloc(sizeof(int) * 9);
	while (i < 9)
	{
		tab->variant[i] = i + 1;
		i++;
	}
	tab->bool = 1;
}

int		ft_filltab(t_ceil *tab, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
		{
			ft_put_error();
			return (1);
		}
		else if (i > 10)
		{
			ft_put_error();
			return (1);
		}
		ft_fillceil(&tab[i], &str[i]);
		i++;
	}
	if (i != 9)
	{
		ft_put_error();
		return (1);
	}
	return (0);
}

t_ceil	**create_tab(char **argv, t_ceil **tab)
{
	int i;
	int kostl;

	i = 0;
	tab = (t_ceil **)malloc(sizeof(t_ceil *) * 9);
	while (i < 9)
	{
		tab[i] = (t_ceil *)malloc(sizeof(t_ceil) * 9);
		if (ft_filltab(tab[i], argv[i]))
			return (NULL);
		i++;
	}
	find_loner(tab);
	if (find_unassigned_location(tab, &i, &kostl))
		backtracking(tab);
	return (tab);
}

int		main(int argc, char **argv)
{
	t_ceil	**tab;

	tab = NULL;
	if (argc != 10)
		ft_put_error();
	else
		tab = create_tab(&argv[1], tab);
	if (tab != NULL)
	{
		ft_put_tab(tab);
		free(tab);
	}
	return (0);
}
