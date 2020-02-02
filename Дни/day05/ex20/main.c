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

// | Turn-in directory: |	ex20/						|
// | ------------------ | ------------------------------|
// | Files to turn in:	|	ft_putnbr_base.c			|
// | Allowed functions: |	ft_putchar     				|
// | Notes: 			|	n/a (без комментариев)		|
//
// 1. Создайте функцию, которая отображает номер в базовой системе на экране.
//    > Create a function that displays a number in a base system on screen.
// 2. Это число задается в виде int, а radix - в виде строки символов.
//    > This number is given in the shape of an int, and the radix in the shape of a string of characters.
// 3. Базовая система содержит все возможные для использования символы для отображения этого числа.
//    > The base-system contains all useable symbols to display that number:
//    3.1 0123456789 это широко используемая базовая система для представления десятичных чисел;
//        > 0123456789 is the commonly used base system to represent decimal numbers;
//    3.2 01 это бинарная базовая система;
//        > 01 is a binary base system;
//    3.3 0123456789ABCDEF это шестнадцатеричная система;
//        > 0123456789ABCDEF an hexadecimal base system;
//    3.4 poneyvif это восьмеричная система.
//        > poneyvif is an octal base system.
// 4. Функция должна обрабатывать отрицательные числа.
//    > The function must handle negative numbers.
// 5. Если будут некорректный аргумент, то ничего не должно отображаться. Примеры некорректных аргументов:
//    > If there’s an invalid argument, nothing should be displayed. Examples of invalid arguments:
//    5.1 система пуста или имеет размер 1;
//        > base is empty or size of 1;
//    5.2 система дважды содержит один и тот же символ;
//        > base contains the same character twice;
//    5.3 система содержит + или - ;
//        > base contains + or - ;
//    5.4 etc.
// 6. Here’s how it should be prototyped: void ft_putnbr_base(int nbr, char *base);

/* -------------------------------------------------------------------------- */
/* ft_putnbr_base                                                             */
/* -------------------------------------------------------------------------- */
int		ft_putchar(char c);

int		is_valid_base2(char *base)
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

void	ft_putnbr_base(int nbr, char *base)
{
	int				radix;
	int				i;
	unsigned int	abs_n;
	char			digits[50];

	radix = is_valid_base2(base);
	if (radix == 0)
		return ;
	i = 0;
	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	if (nbr < 0)
		ft_putchar('-');
	abs_n = nbr < 0 ? -((unsigned int)(nbr)) : (unsigned int)(nbr);
	while (abs_n >= 1)
	{
		digits[i++] = base[abs_n % radix];
		abs_n = abs_n / radix;
	}
	while (i > 0)
		ft_putchar(digits[--i]);
}