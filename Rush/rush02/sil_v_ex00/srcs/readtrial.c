/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readtrial.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 20:00:01 by cerodrig          #+#    #+#             */
/*   Updated: 2018/04/01 03:11:19 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

#define BUF_SIZE 1

int* get_dimension(char *str);

int	main(int argc, char **argv)
{
	char *buf;
	int ret;
	int counter;
	int y;
	char *cbuf;

	counter = 0;
	y = 0;
	buf = (char *)malloc(sizeof(*buf) * (BUF_SIZE + 1));
	cbuf = (char *)malloc(sizeof(*cbuf) * (1000 + 1));
	while ((ret = read(0, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		//printf ("%s", buf);
		if (strcmp(buf,"\n") == 0)
			y++;
		cbuf[counter] = *buf;
		counter++;
	}
	printf("%s", cbuf);
	printf("x*y = %d\n", counter);
	printf("y = %d\n", y);
	printf("x = %d\n", counter/y - 1);
//	dim = get_dimension(buf);
//	printf("%d \n %d \n", dim[0], dim[1]);
	return (0);
}
