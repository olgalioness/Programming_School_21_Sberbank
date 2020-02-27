/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:20:07 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/14 10:35:39 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

t_list	*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
#endif
