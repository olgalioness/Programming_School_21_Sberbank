/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 14:45:14 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/05 17:49:47 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	swap_ptrs(char **matr, int ind1, int ind2)
{
	char *temp;

	temp = matr[ind1];
	matr[ind1] = matr[ind2];
	matr[ind2] = temp;
}

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	sort(char **matr, int size)
{
	int i;

	i = 1;
	while (i < size)
	{
		while (i < size - 1)
		{
			if (ft_strcmp(matr[i], matr[i + 1]) > 0)
				swap_ptrs(matr, i, i + 1);
			i++;
		}
		i = 1;
		size--;
	}
}

void	put_line(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	sort(argv, argc);
	i = 1;
	while (i < argc)
	{
		put_line(argv[i]);
		i++;
	}
}
