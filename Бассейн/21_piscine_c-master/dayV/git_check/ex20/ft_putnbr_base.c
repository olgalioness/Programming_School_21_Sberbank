/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 22:13:07 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/06 13:45:36 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	set(int *arr)
{
	int i;

	i = 0;
	while (i < 41)
	{
		arr[i] = 0;
		i++;
	}
}

void	print(int *arr, char *base)
{
	int i;
	int null_flag;

	null_flag = 0;
	i = 39;
	if (arr[40] == 1)
		ft_putchar('-');
	while (i >= 0)
	{
		if ((arr[i] != 0 || null_flag != 0) || i == 0)
		{
			null_flag = 1;
			ft_putchar(base[arr[i]]);
		}
		i--;
	}
}

void	tokenize(int nb, int base, int *dest_arr)
{
	int		i;
	long	cp;

	i = 0;
	cp = nb;
	if (cp < 0)
	{
		dest_arr[40] = 1;
		cp *= -1;
	}
	while (cp >= 1 && i < 40)
	{
		dest_arr[i] = cp % base;
		cp /= base;
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int arr[41];
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return ;
		j = 1;
		while (base[i + j] != '\0')
		{
			if (base[i + j] == base[i])
				return ;
			j++;
		}
		i++;
	}
	set(arr);
	tokenize(nbr, length(base), arr);
	print(arr, base);
}
