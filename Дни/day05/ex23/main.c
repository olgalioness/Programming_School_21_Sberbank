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

// | Turn-in directory: |	ex23/						|
// | ------------------ | ------------------------------|
// | Files to turn in:	|	ft_print_memory.c			|
// | Allowed functions: |	ft_putchar     				|
// | Notes: 			|	n/a (без комментариев)		|
//
// 1. Создайте функцию, отображающую область памяти на экране.
//    > Create a function that displays the memory area on screen.
// 2. Отображение этой области памяти должно быть разбито на три столбца:
//    > The display of this memory area should be split into three columns:
//    2.1 Шестнадцатеричный адрес первой строки первого символа;
//        > The hexadecimal address of the first line’s first character;
//    2.2 Содержание в шестнадцатеричной системе;
//        > The content in hexadecimal;
//    2.3 Содержание в символах, которые можно вывести.
//        > The content in printable characters.
// 3. Если символ вывести нельзя, то он будет заменен точкой.
//    > If a character is non-printable, it’ll be replaced by a dot.
// 4. Каждая строка должна содержать шестнадцать символов.
//    > Each line should handle sixteen characters.
// 5. Если размер равен 0, то ничего не должно выводиться.
//    > If size equals to 0, nothing should be displayed.
// 6. Example:
//
// guilla_i@seattle $> ./ft_print_memory
// 00000000: 5361 6c75 7420 6c65 7320 616d 696e 6368  Salut les aminch
// 00000010: 6573 2063 2765 7374 2063 6f6f 6c20 7368  es c'est cool sh
// 00000020: 6f77 206d 656d 206f 6e20 6661 6974 2064  ow mem on fait d
// 00000030: 6520 7472 7563 2074 6572 7269 626c 6500  e truc terrible.
// 00000040: 2e00 0102 0304 0506 0708 090e 0f1b 7f    ...............
// guilla_i@seattle $> ./ft_print_memory | cat -te
// 00000000: 5361 6c75 7420 6c65 7320 616d 696e 6368  Salut les aminch$
// 00000010: 6573 2063 2765 7374 2063 6f6f 6c20 7368  es c'est cool sh$
// 00000020: 6f77 206d 656d 206f 6e20 6661 6974 2064  ow mem on fait d$
// 00000030: 6520 7472 7563 2074 6572 7269 626c 6500  e truc terrible.$
// 00000040: 2e00 0102 0304 0506 0708 090e 0f1b 7f    ...............$
// guilla_i@seattle $>
//
// 7. Here’s how it should be prototyped: void	*ft_print_memory(void *addr, unsigned int size);
// 8. It should return addr.

/* -------------------------------------------------------------------------- */
/* ft_print_memory                                                            */
/* -------------------------------------------------------------------------- */
void	ft_putchar(char c);

void	print_char_to_hex(unsigned char addr, unsigned int digits)
{
	if (digits > 1)
		print_char_to_hex(addr / 16, digits - 1);
	ft_putchar(addr % 16 >= 10 ? addr % 16 - 10 + 'a' : addr % 16 + '0');
}

void	print_hex_value(unsigned char *addr, unsigned int start, unsigned int end)
{
	unsigned int	max;

	max = start + 16;
	while (start < max && start < end)
	{
		if (!(start % 2))
			ft_putchar(' ');
		print_char_to_hex(addr[start], 2);
		start++;
	}
	while (start < max)
	{
		if (!(start % 2))
			ft_putchar(' ');
		ft_putchar(' ');
		ft_putchar(' ');
		start++;
	}
}

void	print_ascii_value(unsigned char *addr, unsigned int start, unsigned int end)
{
	unsigned int	max;

	max = start + 16;
	while (start < max && start < end)
	{
		ft_putchar(addr[start] > 31 && addr[start] < 127 ? addr[start] : '.');
		start++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_char_to_hex(i, 8);
		ft_putchar(':');
		print_hex_value(ptr, i, size);
		ft_putchar(' ');
		print_ascii_value(ptr, i, size);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}