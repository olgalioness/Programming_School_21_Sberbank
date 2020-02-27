/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/01 23:16:39 by jaleman           #+#    #+#             */
/*   Updated: 2016/04/01 23:16:40 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ABS(a, b)	((a >= b) ? (a - b) : (b - a))

int			ft_putchar(char c);

static void	solve_queens_puzzle(int queens, int col, int *board)
{
	int		i;
	int		j;

	if (col == queens)
	{
		i = -1;
		while (++i < queens)
		{
			j = 0;
			while (j < queens)
				(j++ == board[i]) ? ft_putchar(j + '0') : 0;
		}
		ft_putchar('\n');
	}
	i = 0;
	while (i < queens)
	{
		j = 0;
		while (j < col && !(board[j] == i || ABS(board[j], i) == col - j))
			j += 1;
		if (j < col && i++ < queens)
			continue ;
		board[col] = i++;
		solve(queens, col + 1, board);
	}
}

void		ft_eight_queens_puzzle_2(void)
{
	int		board[8];
	int		queens;
	int		pos;

	queens = 8;
	pos = 0;
	solve_queens_puzzle(queens, pos, board);
}
