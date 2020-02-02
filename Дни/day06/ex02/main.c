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

// | Turn-in directory: |	ex02/						|
// | ------------------ | ------------------------------|
// | Files to turn in:	|	ft_print_params.c			|
// | Allowed functions: |	ft_putchar     				|
// | Notes: 			|	n/a (без комментариев)		|
//
// 1. Здесь мы имеем дело с программой, поэтому в вашем .c-файле должна быть main функция.
//    > We’re dealing with a program here, you should therefore have a function main in your .c file.
// 2. Создайте программу, отображающую заданные ею аргументы.
//    > Create a program that displays its given arguments.
// 3. Example:
//     $>./a.out test1 test2 test3
//     test1
//     test2
//     test3
//     $>

/* -------------------------------------------------------------------------- */
/* test                                                                       */
/* -------------------------------------------------------------------------- */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

/* -------------------------------------------------------------------------- */
/* ft_print_params                                                            */
/* -------------------------------------------------------------------------- */
//void	ft_putchar(char c);

void	ft_putstr_02(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		ft_putchar(str[idx++]);
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr_02(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}