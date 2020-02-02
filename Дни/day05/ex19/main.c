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

// | Turn-in directory: |	ex19/						|
// | ------------------ | ------------------------------|
// | Files to turn in:	|	ft_strlcpy.c				|
// | Allowed functions: |	Nothing     				|
// | Notes: 			|	n/a (без комментариев)		|
//
// 1. Воссоздайте функционал функции strlcpy (man strlcpy).
//	  > Reproduce the behavior of the function strlcpy (man strlcpy).
// 2. Here’s how it should be prototyped: unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

/* -------------------------------------------------------------------------- */
/* Материал                                                                   */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* ft_strlcpy.c                                                               */
/* -------------------------------------------------------------------------- */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *d = dest;
	char *e = dest + size; /* end of destination buffer */
	char *s = src;

	/* Insert characters into the destination buffer until we reach the end of the source string
	or the end of the destination buffer, whichever comes first. */
	while (*s != '\0' && d < e)
		*d++ = *s++;

	/* Terminate the destination buffer, being wary of the fact
	that len might be zero. */
	if (d < e)	// If the destination buffer still has room.
		*d = 0;
	else if (size > 0)	// We ran out of room, so zero out the last char (if the destination buffer has any items at all).
		d[-1] = 0;
	/* Advance to the end of the source string. */
	while (*s != '\0')
		s++;
	/* Return the number of characters between *src and *s, including *src but not including *s .
	This is the length of the source string. */
	return s - src;
}