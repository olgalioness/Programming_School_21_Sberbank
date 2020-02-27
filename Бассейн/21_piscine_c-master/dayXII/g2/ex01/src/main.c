/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:51:39 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/14 17:00:00 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 28000

void	print(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	display_any(void)
{
	int		size;
	char	buf[BUF_SIZE + 1];

	while ((size = read(1, buf, BUF_SIZE)))
		write(1, buf, size);
}

void	display_file(char *file_name)
{
	int		file_desr;
	char	buf[BUF_SIZE + 1];
	int		size;

	file_desr = open(file_name, O_RDWR);
	if (file_desr < 0)
	{
		print("ft_cat: ");
		print(file_name);
		print(": ");
		(errno == 21) ? print("Is a directory\n") :
			print("No such file or directory\n");
		return ;
	}
	while ((size = read(file_desr, buf, BUF_SIZE)))
	{
		write(1, buf, size);
	}
	close(file_desr);
}


int		main(int argc, char **argv)
{
	int i;

	if (argc == 1)
	{
		display_any();
		return (0);
	}
	i = 0;
	while (++i < argc)
	{
		if (argv[i][0] == '-')
			display_any();
		else
			display_file(argv[i]);
	}
	return (1);
}
