/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:29:33 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/06 14:29:33 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |      ex05/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_print_comb2.c               |
// | Allowed functions: |      ft_putchar                     |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте функцию, отображающую все различные комбинации двух цифр от 00 до 99, перечисленные по возрастанию.
//    > Create a function that displays all different combination of two digits between 00 and 99, listed by ascending order.
// 2. Вот ожидаемый вывод в консоль:
//    	$>./a.out | cat -e
//    	00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
// 3. Вот как должен выглядеть прототип: void ft_print_comb2(void);

// 00 01, 00 02, 00 03, 00 04, 00 05, ...,
// 00 99, 01 02, ...,
// 97 99, 98 99$>

/* -------------------------------------------------------------------------- */
/* ft_putchar                                                                 */
/* -------------------------------------------------------------------------- */

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

/* -------------------------------------------------------------------------- */
/* ft_print_comb2                                                             */
/* -------------------------------------------------------------------------- */

void	ft_print_comb2(void)
{
	int d1;
	int d2;

	d1 = -1;
	// Исходя из d1 = -1 цикл будет повторятся 98 раз, как и у d2
	while (d1++ <= 97)
	{
		// d2 = d1(-1) + 1 = 0
		d2 = d1;
		while (d2++ <= 98)
		{
			// Для того, чтобы перевести цифру, хранящуюся в целочисленной переменной типа int, в символьной тип char на языке Си, необходимо использовать такую строчку кода:
			// c = n + '0'; где переменная n имеет тип int, а переменная c имеет тип char.
			//
			// [0]0	01
			// т.к. d1 = 0 (?+ '0' переводит в символьный вид?)
			ft_putchar((d1 / 10) + '0');
			// 0[0] 01
			// т.к. d1 = 0
			ft_putchar((d1 % 10) + '0');
			ft_putchar(' ');
			// 00 [0]1
			// т.к. d2 = 1
			ft_putchar((d2 / 10) + '0');
			// 00 0[1]
			// т.к. d2 = 1 (1 % 10 = 1)
			ft_putchar((d2 % 10) + '0');
			// Как только if (d1 != 98 || d2 != 99), то перестаем ставить ',' и ' ', а значит это конец цикла.
			if (d1 != 98 || d2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			//d2++
		}
		//d1++
	}
}

/* -------------------------------------------------------------------------- */
/* main & test                                                                */
/* -------------------------------------------------------------------------- */

int main()
{
    ft_print_comb2();
    return(0);
}