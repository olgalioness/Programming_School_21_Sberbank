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

// | Turn-in directory: |	ex18/						|
// | ------------------ | ------------------------------|
// | Files to turn in:	|	ft_strlcat.c				|
// | Allowed functions: |	Nothing     				|
// | Notes: 			|	n/a (без комментариев)		|
//
// 1. Воссоздайте функционал функции strlcat (man strlcat).
//	  > Reproduce the behavior of the function strlcat (man strlcat).
// 2. Here’s how it should be prototyped: unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

/* -------------------------------------------------------------------------- */
/* Материал                                                                   */
/* -------------------------------------------------------------------------- */
//	Конкатенирует (склеивает) строку src в dst, где size-размер получаемой строки после	склеивания

/*
** strlcat копирует из строки src в буфер dst не более чем size
** символов и гарантированно устанавливает в конец строки нулевой символ
** таким образом, чтобы продолжить строку, на которую указывает dst. В случае,
** когда dst указывает на нуль-символ, поведение функций эквивалентно.
**
** Возвращает суммарную длину строк по адресам src и dst. Возвращаемое значение
** не зависит от того, удалось скопировать строку полностью или нет; это
** позволяет легко определить что буфер назначения слишком мал для копируемой
** строки.
*/

// https://www.viva64.com/ru/b/0640/

/* -------------------------------------------------------------------------- */
/* ft_strlcat                                                                 */
/* -------------------------------------------------------------------------- */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i_dest;
	unsigned int i_src;
	unsigned int r_size;
	unsigned int o_size;

	i_dest = 0;
	i_src = 0;
	r_size = 0;
	while (dest[i_dest] != '\0')
		i_dest++;
	o_size = i_dest;
	while (src[r_size] != '\0')
		r_size++;
	if (i_dest >= size)
		return (size + r_size);
	while (src[i_src] != '\0' && i_dest + i_src < size)
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	return (r_size + o_size);
}