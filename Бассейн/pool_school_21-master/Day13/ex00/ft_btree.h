/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:29:30 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/18 16:54:08 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <stdlib.h>

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;
t_btree			*btree_create_node(void *item);

#endif
