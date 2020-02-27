/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 13:54:16 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/15 22:06:21 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define STD_IN 0
# define STD_OUT 1
# define STD_ERR 2
# define BUF_SIZE 4096

# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>

int		ft_check(int *fd, int argc, char **argv);
int		ft_strlen(char *str);
void	ft_puts(int fd, char *str);

#endif
