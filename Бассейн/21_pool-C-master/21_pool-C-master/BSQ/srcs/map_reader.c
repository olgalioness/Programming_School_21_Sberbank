/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrowzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:18:24 by edrowzee          #+#    #+#             */
/*   Updated: 2019/06/27 11:09:56 by edrowzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int		map_open_count(char *input_file, t_fline test)
{
	int		i;
	int		file;
	char	buff[BUFF_SIZE + 1];

	i = 0;
	file = open(input_file, O_RDWR);
	if (file == -1)
	{
		errno_errors(errno, test);
		close(file);
		return (0);
	}
	while (read(file, buff, BUFF_SIZE))
		i++;
	if (close(file) == -1)
	{
		test.error = 1;
		return (0);
	}
	return (i);
}

void	write_struct_console(t_list **begin_list, char data)
{
	t_list *list;

	list = *begin_list;
	if (*begin_list == 0)
	{
		*begin_list = ft_create_elem(data);
		(*begin_list)->next = 0;
		return ;
	}
	while (list->next)
		list = list->next;
	list->next = ft_create_elem(data);
	list = list->next;
	list->next = 0;
}

char	*return_struct_console(t_list *struct_list, char *str)
{
	int		i;

	i = 0;
	if (struct_list)
	{
		while (struct_list)
		{
			str[i] = struct_list->data;
			struct_list = struct_list->next;
			i++;
		}
	}
	else
		return (NULL);
	return (str);
}

t_list	*ft_create_elem(char data)
{
	t_list *plist;

	plist = (t_list*)malloc(sizeof(t_list));
	plist->data = data;
	plist->next = NULL;
	return (plist);
}

char	*map_open_from_console(void)
{
	t_list	*str;
	int		i;
	char	c;
	char	*string;

	i = 0;
	str = NULL;
	while (read(STDIN_FILENO, &c, 1))
	{
		write_struct_console(&str, c);
		i++;
	}
	write_struct_console(&str, '\0');
	string = (char*)malloc(sizeof(char) * i + 1);
	string = return_struct_console(str, string);
	return (string);
}
