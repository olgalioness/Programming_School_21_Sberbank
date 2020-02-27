/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 23:33:29 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/19 00:44:39 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "file1.c"
#include "check.c"
#include "operation.c"
#include "lib_ft.c"
#include "lib_steck.c"
#include <unistd.h>
#include <stdio.h>

void	ft_print_list(t_list *kek)
{
	while (kek != 0)
	{
		printf("%s",kek->data);
		kek = kek->next;
	}
}

int		main()
{
	t_list *steck;
	char *kek;
	char arg[] = "12 + 999 / (3 - 22) % 11 - 88 + 99";
	//kek = ft_strdup(arg);
	//printf("%s\n", ft_strcat("123", "456"));
	steck = ft_pshe_pshe(arg, 0, 0, 0);
//	ft_list_reverse(&steck);
//	kek = ft_cut_last(ft_kurwa(steck));
//	printf("ppol_note = %s", kek);
//	kek = ft_strdup(arg);
	printf("kek = %s", kek);
	return (0);
}
