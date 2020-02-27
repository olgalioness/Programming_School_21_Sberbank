/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:43:04 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/11 17:10:09 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcs.h"

int		add(int left, int right)
{
	printf("ADD : ...\n");
	return (left + right);
}

int		sub(int left, int right)
{
	printf("SUB : ...\n");

	return (left - right);
}

int		mul(int left, int right)
{
	printf("MUL : ...\n");

	return (left * right);
}

int		div(int left, int right)
{
	printf("DIV : ...\n");

	if (!right)
		return (0);
	return (left / right);
}

int		mod(int left, int right)
{
	printf("MOD : ...\n");

	if (!right)
		return (0);
	return (left % right);
}
