/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 23:16:42 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/03 23:41:03 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#define N 8

int	isSafe(int board[N][N], int row, int col)
{
	int i;
	int j;

	i = 0;
	while (i < col)
	{
		if (board[row][i++])
			return (0);
	}
	i = row;
	j = col;
	while (i >= 0 && j >= 0)
	{
		if (board[i--][j--])
			return (0);
	}
	i = row;
	j = col;
	while (j >= 0 && i < N)
	{
		if (board[i++][j--])
			return (0);
	}
	return (1);
}

int	solveNQUtil(int board[N][N], int col, int *numberOfsolution)
{
	int i;
	int opport;

	i = 0;
	if (col == N)
	{
		*numberOfsolution += 1;
		return (1);
	}
	opport = 0;
	while (i < N)
	{
		if (isSafe(board, i, col))
		{
			board[i][col] = 1;
			opport = solveNQUtil(board, col + 1, numberOfsolution) || opport;
			board[i][col] = 0;
		}
		i++;
	}
	return (opport);
}

int	ft_eight_queens_puzzle(void)
{
	int board[8][8];
	int a;

	a = 0;
	memset(board, 0, sizeof(board));
	solveNQUtil(board, 0, &a);
	return (a);
}
