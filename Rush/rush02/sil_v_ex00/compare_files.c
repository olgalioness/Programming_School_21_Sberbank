/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dporres <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 02:42:33 by dporres           #+#    #+#             */
/*   Updated: 2018/04/01 02:59:11 by dporres          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	compare_files(FILE *fp1, FILE *fp2)
{
	char ch1;
	char ch2;
	int pos;
	int line;

	ch1 = getc(fp1);
	ch2 = getc(fp2);
	pos = 0;
	line = 1;

	while (ch1 != EOF && ch2 != EOF)
	{
		pos++;
		if (ch1 == '\n' && ch2 == '\n')
		{
			line++;
			pos = 0;
		}
	}
}
