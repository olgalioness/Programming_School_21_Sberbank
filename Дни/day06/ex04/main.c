/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:37:20 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/20 17:37:20 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |	ex04/						|
// | ------------------ | ------------------------------|
// | Files to turn in:	|	ft_sort_params.c			|
// | Allowed functions: |	ft_putchar     				|
// | Notes: 			|	n/a (без комментариев)		|
//
// 1. Здесь мы имеем дело с программой, поэтому в вашем .c-файле должна быть main функция.
//    > We’re dealing with a program here, you should therefore have a function main in your .c file.
// 2. Создайте программу, которая выводит данные ей аргументы и сортируем в пордяке ascii таблицы.
//    > Create a program that displays its given arguments sorted by ascii order.
// 3. Должны отображаться все аргументы, кроме argv[0].
//    > It should display all arguments, except for argv[0].
// 4. Каждый аргумент должен находиться на отдельной строчке.
//    > All arguments have to have their own line.

/* -------------------------------------------------------------------------- */
/* test                                                                       */
/* -------------------------------------------------------------------------- */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

/* -------------------------------------------------------------------------- */
/* ft_sort_params                                                             */
/* -------------------------------------------------------------------------- */

//void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char *c)
{
	while (*c)
	{
		ft_putchar(*c);
		c++;
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*c;

	i = 2;
	argc = 1;
	while (argv[argc])
	{
		while (argv[i])
		{
			if (ft_strcmp(argv[argc], argv[i]) > 0)
			{
				c = argv[argc];
				argv[argc] = argv[i];
				argv[i] = c;
			}
			i++;
		}
		ft_sort_params(argv[argc]);
		ft_putchar('\n');
		argc++;
		i = argc + 1;
	}
	return (0);
}