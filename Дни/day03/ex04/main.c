/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 03:17:27 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/08 03:17:27 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// | Turn-in directory: |      ex04/                          |
// | ------------------ | ----------------------------------- |
// | Files to turn in:  |      ft_ultimate_div_mod.c          |
// | Allowed functions: |      Nothing                        |
// | Notes:             |      n/a (без комментариев)         |
//
// 1. Создайте функцию по такому прототипу: void ft_ultimate_div_mod(int *a, int *b);
//
// 2. Эта функция делит параметры переменной (*a) на (*b). Результат деления хранится в int переменной на которую указывает (*a).
//    Остаток деления хранится в int переменной на которую указывает (*b)
//
//    >This function divides parameters (a) by (b). The result of this division is stored in the
//    int pointed by a. The remainder of the division is stored in the int pointed by b.


#include <stdio.h>			// Для тестов и компиляции, чтобы использовать printf

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_div;			// Объявляем переменную, где будет хранится результат деления
	int temp_mod;			// Объявляем переменную, где будет хранится результат деления с остатком

	temp_div = *a / *b;		// Записывает в переменную результат деления указателей (*a / *b)
	temp_mod = *a % *b;		// Записываем в переменную результат деления указателей с остатком (*a % *b)

	*a = temp_div;			// Записываем в указатель *a = temp_div = *a / *b
	*b = temp_mod;			// Записываем в указатель *b = temp_mod = *a % *b
}

int     main()
{
    int a = 40;
	int b = 15;
		printf("a - %d, b - %d\n", a, b);	// Выписываем значения a = 40, b = 15

	printf("Using ft_ultimate_div_mod\n");

    ft_ultimate_div_mod(&a, &b);				// Указываем адреса со значениями в функцию и вычисляем
												// Теперь a = *a=>temp_div = *a / *b	<=>		40 / 15 = 2(,6...)
												// Теперь b = *b=>temp_mod = *a % *b	<=>		40 % 15 = 10
    	printf("a - %d, b - %d\n", a, b);		// Выписываем получившиеся значения

	return (0);
}