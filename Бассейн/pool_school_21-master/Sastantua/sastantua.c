/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 16:17:41 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/04 23:37:05 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	build_floor(int num_while, int star, int space);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		count_star(int floor)
{
	int result;

	result = 0;
	if (floor == 1)
		return (1);
	result = count_star(floor - 1) + 2 * floor + (floor / 2 + 2) * 2;
	return (result);
}

void	while_putchar(int size, char c)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putchar(c);
		i++;
	}
}

void	build_floor_door(int size, int space, int star, int size_door)
{
	int i;

	i = 0;
	build_floor(size + 2 - size_door, star, space);
	space -= size + 2 - size_door;
	star += 2 * (size + 2 - size_door);
	while (i < size_door)
	{
		while_putchar(space--, ' ');
		ft_putchar('/');
		while_putchar((star - size_door) / 2, '*');
		if (size >= 5 && (size_door) / 2 == i)
		{
			while_putchar(size_door - 2, '|');
			ft_putchar('$');
			ft_putchar('|');
		}
		else
			while_putchar(size_door, '|');
		while_putchar((star - size_door) / 2, '*');
		ft_putchar('\\');
		ft_putchar('\n');
		star += 2;
		i++;
	}
}

void	build_floor(int num_while, int star, int space)
{
	int i;

	i = 0;
	while (i < num_while)
	{
		while_putchar(space, ' ');
		ft_putchar('/');
		while_putchar(star, '*');
		ft_putchar('\\');
		ft_putchar('\n');
		space -= 1;
		star += 2;
		i++;
	}
}

void	sastantua(int size)
{
	int num_floor;
	int space;
	int door;

	door = size;
	if (size % 2 == 0)
		door--;
	space = 0;
	num_floor = 1;
	if (size <= 0)
		return ;
	while (num_floor < size)
	{
		space += num_floor + 3 + (num_floor + 1) / 2;
		num_floor++;
	}
	num_floor = 1;
	space += size + 1;
	while (num_floor < size)
	{
		build_floor(num_floor + 2, count_star(num_floor), space);
		space = space - (num_floor + (num_floor + 1) / 2 + 3);
		num_floor++;
	}
	build_floor_door(size, size + 1, count_star(size), door);
}
