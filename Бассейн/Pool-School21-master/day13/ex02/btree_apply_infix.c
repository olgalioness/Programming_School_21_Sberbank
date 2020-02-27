/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:48:06 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/15 20:09:43 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_prefix(root->left, applyf);
	(*applyf)(root->item);
	btree_apply_prefix(root->right, applyf);
}
