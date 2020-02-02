/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbrill <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/25 15:09:30 by cbrill            #+#    #+#             */
/*   Updated: 2018/03/25 23:06:05 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	print_grid(int **grid);
int		**read_grid(char **argv);
int		nearby(int n);
int		validate(int **grid, int row, int col, int val);
int		fill(int **grid, int n);
int		ft_validate_grid(int **grid);

int		main(int argc, char **argv)
{
	int **grid;

	if (argc != 10)
		ft_putstr("Error\n");
	else if (argc == 10)
	{
		grid = read_grid(&argv[1]);
		if (grid == NULL)
			ft_putstr("Error\n");
		else
		{
			fill(grid, 0);
			if (ft_validate_grid(grid))
				print_grid(grid);
			else
				ft_putstr("Error\n");
		}
		free(grid);
	}
	return (0);
}
