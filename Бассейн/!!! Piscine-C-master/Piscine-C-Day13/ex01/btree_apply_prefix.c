/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 11:45:25 by rfork             #+#    #+#             */
/*   Updated: 2019/08/16 19:31:10 by rfork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root== NULL)
		return ;
	applyf(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}
