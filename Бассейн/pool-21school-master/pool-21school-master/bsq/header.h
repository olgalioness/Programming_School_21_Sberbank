/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:38:37 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/21 11:23:55 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <io.h>

int		in_loop(char *map, int *new_map, int index, char c);
int		artem(char *map, int *new_map, int index);
void    read_from(int fd);
#endif
