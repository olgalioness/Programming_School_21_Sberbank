/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:26:24 by rfork             #+#    #+#             */
/*   Updated: 2019/08/22 10:55:55 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		g_h;
int		g_l;
char	g_em;
char	g_ob;
char	g_fu;
int		ft_check(char **arr, int i, int j, int a);
void	ft_1_to_2(char *buf, int k, int i);
int		**bsq(int **arr2);
void	ft_change_types(char **arr);
void	ft_fn(char **arr, int **arr2);
void	ft_len(char *buf, int ret);
void	ft_write(char **arr, int x, int y, int n);

#endif
