/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 20:49:35 by marvin            #+#    #+#             */
/*   Updated: 2020/01/13 20:49:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |      ex08/The Eight Queens          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_eight_queens_puzzle.c       |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Цель этой игры - разместить на шахматной доске восемь ферзей, не имея возможности им ударить друг друга за один бросок.
//    > The aim of this game is to place eight queens on a chessboard, without them being able to meet in one shot.
// 2. Освежите свою память в шахматных правилах. // Refresh your memories on chess rules.
// 3. Очевидно, что нужна рекурсия для решения этой проблемы. // Evidently, recurstivity is required to solve this problem.
// 4. Создайте функцию, которая возвращает количество возможностей поместить эти восемь ферзей на шахматную доску, не допуская их друг к другу.
//    > Create a function that returns the number of possibilities to place those eight queens on the chessboard without them being able to reach each other.
// 5. Here’s how it should be prototyped: int ft_eight_queens_puzzle(void);
// 6. Функция должна возвращать значение менее чем за 2 секунды. // Your function must return its result in less than two seconds.

// Гуглить задачу о восьми ферзях:
// https://github.com/tsetsefly/42-piscine_self_study/blob/master/d04/ex08/eight_queens.md

int		ft_8_check_queen_helper(int queens[], int row, int col)
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

void	ft_8_queen_helper(int partial[], int queen_count, int *solution_count)
{
	int i;

	if (queen_count == 8)
	{
		*solution_count = *solution_count + 1;
	}
	i = 1;
	while (i <= 8)
	{
		if (ft_8_check_queen_helper(partial, queen_count + 1, i))
		{
			partial[queen_count] = i;
			ft_8_queen_helper(partial, queen_count + 1, solution_count);
		}
		i++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	int solution_count;
	int partial[8];

	solution_count = 0;
	ft_8_queen_helper(partial, 0, &solution_count);
	return (solution_count);
}