/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:51:27 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/15 19:12:23 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H
# define BUFF 1023
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

int		read_file(char *str);
void	cat_file(int argc, char **argv);
void	ft_putstr(char *str);

#endif
