/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   artem.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcharla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:04:35 by kcharla           #+#    #+#             */
/*   Updated: 2019/08/20 14:05:46 by kcharla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		artem(char **map, char **imap, int index, char c)
{
	char 	*t_map;
	int		*t_imap;

	t_map = malloc(sizeof(char) * (index + 2));
	t_imap = malloc(sizeof(short) * (index + 2));
	if(t_map != 0 && t_imap != 0)
	{
		arr_copy(map, t_map, index);
		free(*map);
		*map = t_map;
		t_map[index] = c;
		/*--------------*/
		arr_copy(imap, t_imap, index);
		free(*imap);
		*imap = t_imap;
		t_imap[index] = what_to_put_in_imap();
	}
	else
	{
		/* maybe write some error msgs? */
		exit(1);
	}
}

void	arr_copy(void *from, void *to, int length)
{
	int		i;
	i = 0;
	while (i < length)
	{
		to[i] = from[i];
		i++;
	}
}
