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

// | Turn-in directory: |	ex00/						|
// | ------------------ | ------------------------------|
// | Files to turn in:	|	ft_strdup.c    	    		|
// | Allowed functions: |	malloc       				|
// | Notes: 			|	n/a (без комментариев)		|
//
// 1. Воссоздайте функционал функции strdup (man strdup).
//    > Reproduce the behavior of the function strdup (man strdup).
// 2. Here’s how it should be prototyped: char *ft_strdup(char *src);

/*
**	ft_strdup duplicate the string s1.
**	If src and dst are close, use ft_memmove to avoid overlap.
**	WARNING: ft_strdup use malloc. So it need to be free to avoid leaks.
**	WARNING: malloc can fail in this case, NULL is returned.
*/

/*
** strdup, -- save a copy of a string
** The strdup() function allocates sufficient memory for a copy of the
** string s1, does the copy, and returns a pointer to it.  The pointer
** may subsequently be used as an argument to the function free(3).
*/

/*
** Функция выделяет память, достаточную для хранения дубликата строки,
** на которую указывает str, а затем производит копирование этой строки
** в выделенную область и возвращает указатель на нее.
*/

// https://learnc.info/c/memory_allocation.html

/* -------------------------------------------------------------------------- */
/* tests                                                                      */
/* -------------------------------------------------------------------------- */
#include <stdio.h>
#include <assert.h>
#include <string.h>

/* -------------------------------------------------------------------------- */
/* ft_strdup                                                                  */
/* -------------------------------------------------------------------------- */
#include <stdlib.h>	// когда вы воссоздаете функционал функции, пожалуйста читайте man функции
// потому что в man могут быть подсказки, которые помогут вам ее воссоздать
// e.g. тут нам нужен strlen, чтобы посчитать длину строки (кол-во символов), которые мы должны сохранить.
char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (src[i] != '\0')			// Записываем размер char массива, это по сути strlen функция.
    {
        i++;
    }

	//i =+ 1;						// i = i + 1, чтобы строка была "полной", тоесть имела '\0' в конце, то добавляем extra byte )))
	dst = (char *)malloc(i + 1);	// выделяем память для переменной dst, учитывая кол-во байт записанных в i, почему i + 1? Строку выше читай
	while(i >= 0)
	{
		dst[i] = src[i];
		i--;						// in my opinion as strlen was taking the number count the i was at the last character so it makes sense that we iterate backwards.
	}
	return(dst);
}

/* -------------------------------------------------------------------------- */
/* tests                                                                      */
/* -------------------------------------------------------------------------- */
int main()
{
	char  test_str1[]	= "hey stack!";
	assert(strcmp(test_str1, ft_strdup("hey stack!"))==0);

	char *res	= ft_strdup(test_str1);
	printf("%s\n", res);

	return 0;
}