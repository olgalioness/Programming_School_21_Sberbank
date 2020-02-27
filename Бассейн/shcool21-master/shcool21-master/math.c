
////HEADER OF 42.FR ////////

#include "includes/header.h"

void	return_map(t_data *dat, int *answer)
{
	int i;
	int k;

	i = -1;
	while (++i < dat->size[1])
	{
		k = -1;
		while (++k < dat->size[0])
		{
			if (i >= answer[0] && i < answer[0] + answer[2] && k >= answer[1]
					&& k < answer[1] + answer[2])
				ft_putchar(dat->chars[2]);
			else if (dat->coords[i][k])
				ft_putchar(dat->chars[1]);
			else
				ft_putchar(dat->chars[0]);
		}
		ft_putchar('\n');
	}
}

int		kubik(t_data *dat, int i, int k, int total)
{
	int	t;

	t = -1;
	while (++t <= total)
	{
		if (dat->coords[i + total][k + t] || dat->coords[i + k][k + total])
			return (1);
	}
	return (0);
}

int		kubik_s(t_data *dat, int i, int k)
{
	int	total;

	total = 1;
	if (dat->coords[i][k])
		return (0);
	while (k + total < dat->size[0] && i + total < dat->size[1] &&
			!kubik(dat, i, k, total))
		++total;
	return (total);
}

void	math(t_data *dat)
{
	int	i;
	int	k;
	int	t;
	int	arr[3];

	i = -1;
	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 0;
	while (++i < dat->size[1])
	{
		k = -1;
		while (++k < dat->size[0])
		{
			if ((t = kubik_s(*dat, i, k)) > arr[2])
			{
				arr[0] = i;
				arr[1] = k;
				arr[2] = t;
			}
		}
	}
	return_map(dat, arr)
}
