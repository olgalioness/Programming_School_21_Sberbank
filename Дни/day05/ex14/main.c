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

// | Turn-in directory: |      ex14/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_str_is_uppercase.c          |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте функцию, которая возвращает 1, если строка, заданная в качестве параметра, содержит только заглавные алфавитные символы, и 0, если она содержит любые другие символы.
//    > Create a function that returns 1 if the string given as a parameter contains only uppercase alphabetical characters, and 0 if it contains any other character.
// 2. Here’s how it should be prototyped: int ft_str_is_uppercase(char *str);
// 3. Должно вернуть 1, если строка пуста. // It should return 1 if str is empty.

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))		// Если текущий символ не является данным из диапазона
		{
			return (0);								// то return (0)
		}
		i++;
	}
	return (1);
}