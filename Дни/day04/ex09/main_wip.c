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

// | Turn-in directory: |      ex09/The Eight Queens 2        |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_eight_queens_puzzle_2.c     |
// | Allowed functions: |      ft_putchar                     |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте функцию, которая отображает все возможные размещения восьми ферзей на шахматной доске, без возможности им ударить друг друга.
//    > Create a function that displays all possible placements of the eight queens on the chessboard, without them being able to reach each other.
// 2. Нужна рекурсия для решения этой проблемы. // Recursivity is required to solve this problem.
// 3. Here’s how it should be prototyped: void ft_eight_queens_puzzle_2(void);
// 4. Here’s how it’ll be displayed:
//    $>./a.out
//    15863724
//    16837425
//    17468253
//    ...
// 5. Последовательность идет слева направо. Первая цифра представляет собой позицию первой королевы в первой колонке (индекс, начинающийся с 1).
//    N-я цифра представляет собой позицию N-ой королевы в N-ой колонке.
//    > The sequence goes from left to right. The first digit represents the first Queen’s position in the first column (the index starting from 1).
//    The N-th digit represents the N-th Queen’s position in the N-th column.
// 6. После последнего решения должен быть разрыв строки. // There’s a line break after the last solution.
// 7. Функция должна возвращать значение менее чем за 2 секунды. // Your function must return its result in less than two seconds.

// awnser = "15863724\n16837425\n17468253\n17582463\n24683175\n25713864\n25741863\n26174835\n26831475\n27368514\n27581463\n28613574
// \n31758246\n35281746\n35286471\n35714286\n35841726\n36258174\n36271485\n36275184\n36418572\n36428571\n36814752\n36815724\n36824175
// \n37285146\n37286415\n38471625\n41582736\n41586372\n42586137\n42736815\n42736851\n42751863\n42857136\n42861357\n46152837\n46827135
// \n46831752\n47185263\n47382516\n47526138\n47531682\n48136275\n48157263\n48531726\n51468273\n51842736\n51863724\n52468317\n52473861
// \n52617483\n52814736\n53168247\n53172864\n53847162\n57138642\n57142863\n57248136\n57263148\n57263184\n57413862\n58413627\n58417263
// \n61528374\n62713584\n62714853\n63175824\n63184275\n63185247\n63571428\n63581427\n63724815\n63728514\n63741825\n64158273\n64285713
// \n64713528\n64718253\n68241753\n71386425\n72418536\n72631485\n73168524\n73825164\n74258136\n74286135\n75316824\n82417536\n82531746\n83162574\n84136275

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