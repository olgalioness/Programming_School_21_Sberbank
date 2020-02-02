/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 20:09:22 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/18 20:09:22 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |	ex21/						|
// | ------------------ | ------------------------------|
// | Files to turn in:	|	ft_atoi_base.c				|
// | Allowed functions: |	Nothing     				|
// | Notes: 			|	n/a (без комментариев)		|
//
// 1. Создайте функцию, которая возвращает число. Это число формируется в виде строки символов.
//    > Create a function that returns a number. This number is shaped as a string of characters.
// 2. Строка символов показывает число в определенной базе, которая задана в качестве второго параметра.
//    > The string of characters reveals the number in a specific base, given as a second parameter.
// 3. Функция должна обрабатывать отрицательные числа.
//    > The function must handle negative numbers.
// 4. Функция должна обрабатывать знаки, как в man atoi.
//    > The function must handle signs like man atoi.
// 5. Если есть некорректный аргумент, функция должна вернуть 0. Примеры некорректных аргументов:
//    > If there’s an invalid argument, the function should return 0. Examples of invalid arguments:
//    5.1 str является пустой строкой;
//        > str is an empty string;
//    5.2 система пуста или имеет размер 1;
//        > the base is empty or size of 1;
//    5.3 str содержит символы, которые не являются частью базы, или не + и не - ;
//        > str contains characters that aren’t part of the base, or aren’t + nor - ;
//    5.4 система дважды содержит один и тот же символ;
//        > the base contains the same character twice;
//    5.5 система содержит + или - ;
//        > the base contains + or - ;
//    5.6 etc.
// 6. Here’s how it should be prototyped: int ft_atoi_base(char *str, char *base);

/* -------------------------------------------------------------------------- */
/* ft_atoi_base                                                               */
/* -------------------------------------------------------------------------- */
#include <limits.h>

int		is_valid_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && i != j)
			{
				return (0);
			}
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		i++;
	}
	return (i > 1 ? i : 0);
}

int		get_char_idx(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int sign;
	int curr_num;
	int i;
	int	radix;
	int char_idx;

	i = 0;
	curr_num = 0;
	sign = 1;
	radix = is_valid_base(base);
	if (radix == 0)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] != '\0')
	{
		if (curr_num > INT_MAX / radix)
			return (sign == 1 ? INT_MAX : INT_MIN);
		char_idx = get_char_idx(str[i++], base);
		if (char_idx == -1)
			return (0);
		curr_num = radix * curr_num + char_idx;
	}
	return (curr_num * sign);
}