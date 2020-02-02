#include <stdlib.h>
#include "4-2-ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*to_free;

	if (*begin_list)
	{
		if (cmp((*begin_list)->data, data_ref) == 0)
		{
			to_free = *begin_list;
			*begin_list = (*begin_list)->next;
			free(to_free);
			ft_list_remove_if(begin_list, data_ref, cmp);
		}
		else
			ft_list_remove_if(&(*begin_list)->next, data_ref, cmp);
	}
}
