/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskeleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:18:10 by cskeleto          #+#    #+#             */
/*   Updated: 2018/08/22 17:24:29 by cskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_print_alphabet(){
	// printf("Hello world\n");

	int i = 97;

	while(i < 'z') {
		printf("%c", i);
		i++;	
	}
}

int main(){
	ft_print_alphabet();
	return 0;
}
