/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 22:15:32 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/18 22:39:38 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int		match(char *s1, char *s2)
{
	if (*s2 == '*' && *s1 != '\0')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s2 == *s1 && *s1 != '\0')
		return (match(s1 + 1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}

int main()
{
	printf("%d", match("main.c", "*ain.c"));
}
