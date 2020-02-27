/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:51:27 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/15 18:42:19 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H
# define BUFF 1023
# include <unistd.h>
# include <fcntl.h>

int		read_file(char *str);
void	ft_putstr(char *str);

#endif
