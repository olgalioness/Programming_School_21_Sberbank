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

// | Turn-in directory: |	ex22/						|
// | ------------------ | ------------------------------|
// | Files to turn in:	|	ft_putstr_non_printable.c	|
// | Allowed functions: |	ft_putchar     				|
// | Notes: 			|	n/a (без комментариев)		|
//
// 1. Создайте функцию, которая выводит строку символов на экране. Если эта строка содержит символы, которые не могут быть выведены,
//    то они должны быть выведены в виде шестнадцатиричных (нижних регистров) символов, перед которыми стоит "backslash".
//    > Create a function that displays a string of characters on screen. If this string contains characters that aren’t printable,
//    they’ll have to be displayed in the shape of hexadecimals (lowercase), preceeded by a "backslash".
// 2. For example:					Coucou\ntu vas bien ?
//    The function should display:	Coucou\0atu vas bien ?
// 3. Here’s how it should be prototyped: void ft_putstr_non_printable(char *str);

/* -------------------------------------------------------------------------- */
/* ft_putstr_non_printable                                                    */
/* -------------------------------------------------------------------------- */
void	ft_putchar(char c);

void	print_hex(int idx)
{
	unsigned int	u_idx;

	u_idx = idx < 0 ? (unsigned int)(idx + 256) : (unsigned int)idx;
	ft_putchar("0123456789abcdef"[u_idx / 16]);
	ft_putchar("0123456789abcdef"[u_idx % 16]);
}

int		is_printable_helper(char c)
{
	return (c >= 32 && c < 127);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_printable_helper(str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			print_hex(str[i]);
		}
		i++;
	}
}