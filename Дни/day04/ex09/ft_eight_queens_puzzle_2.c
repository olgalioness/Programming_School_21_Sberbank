/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:23:27 by marvin            #+#    #+#             */
/*   Updated: 2020/01/14 17:23:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_8_check_queen_helper2(int queens[], int row, int col)
{
	int idx;

	idx = 1;
	while (idx < row)
	{
		if (queens[idx - 1] == col
			|| idx - row == queens[idx - 1] - col
			|| row - idx == queens[idx - 1] - col)
		{
			return (0);
		}
		idx++;
	}
	return (1);
}

void	ft_8_queen_helper2(int partial[], int queen_count)
{
	int i;

	i = 0;
	if (queen_count == 8)
	{
		while (i < 8)
		{
			ft_putchar(48 + partial[i]);
			i++;
		}
		ft_putchar('\n');
	}
	i = 1;
	while (i <= 8)
	{
		if (ft_8_check_queen_helper2(partial, queen_count + 1, i))
		{
			partial[queen_count] = i;
			ft_8_queen_helper2(partial, queen_count + 1);
		}
		i++;
	}
}

void	ft_eight_queens_puzzle_2(void)
{
	int partial[8];

	ft_8_queen_helper2(partial, 0);
}