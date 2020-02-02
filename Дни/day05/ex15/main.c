/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 05:30:17 by marvin            #+#    #+#             */
/*   Updated: 2020/01/18 05:30:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |      ex15/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_str_is_printable.c          |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте функцию, которая возвращает 1, если строка, заданная в качестве параметра, содержит только символы, которые можно вывести на экран, и 0, если она содержит любой другой символ.
//    > Create a function that returns 1 if the string given as a parameter contains only printable characters, and 0 if it contains any other character.
// 2. Here’s how it should be prototyped: int ft_str_is_printable(char *str);
// 3. Если строка пуста, то return 1. // It should return 1 if str is empty.

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] < 127))	// Если текущий символ не находится в этом диапазоне
		{
			return (0);							// то return (0)
		}
		i++;
	}
	return (1);
}