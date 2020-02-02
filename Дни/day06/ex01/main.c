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

// | Turn-in directory: |	ex01/						|
// | ------------------ | ------------------------------|
// | Files to turn in:	|	ft_print_program_name.c		|
// | Allowed functions: |	ft_putchar     				|
// | Notes: 			|	n/a (без комментариев)		|
//
// 1. Здесь мы имеем дело с программой, поэтому в вашем .c-файле должна быть main функция.
//    > We’re dealing with a program here, you should therefore have a function main in your .c file.
// 2. Создайте программу, которая выводит ее собственное название.
//    > Create a program that displays its own name.
// 3. Example:
//     $>./a.out
//     ./a.out
//     $>

// https://www.youtube.com/watch?v=SEJjSo4qkl8
// https://www.youtube.com/watch?v=aP1ijjeZc24

/* -------------------------------------------------------------------------- */
/* test                                                                       */
/* -------------------------------------------------------------------------- */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

/* -------------------------------------------------------------------------- */
/* ft_print_program_name                                                      */
/* -------------------------------------------------------------------------- */
//void	ft_putchar(char c);

void	ft_putstr_01(char *str)
{
	int ind;

	ind = 0;
	while (str[ind] != '\0')
	{
		ft_putchar(str[ind++]);
	}
}

int		main(int argc, char *argv[])
{
	if (argc > 0)
	{
		ft_putstr_01(argv[0]);
		ft_putchar('\n');
	}
	return (0);
}