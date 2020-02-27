/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjosmyn <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:41:31 by qjosmyn           #+#    #+#             */
/*   Updated: 2019/08/19 00:47:31 by qjosmyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

int		ft_priority(char c)
{
	if (c == '(')
		return (0);
	else if (c == '%')
		return 3;
	else if (c == '*' || c == '/')
		return (2);
	else if(c == '+' || c == '-')
		return (1);
	else
		return (0);
}

char	*ft_strdup(char *str)
{
	char *buf;
	int i;

	buf = 0;
	if (*str == ' ')
		return (buf);
	i = 0;
	buf = (char*)malloc(sizeof(char) * (ft_strlen(str) +1));
	while (str[i] != ' ')
	{
		buf[i] = str[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}


void	ft_list_reverse(t_list **begin_list)
{
	t_list	*ls_1;
	t_list	*ls_2;
	t_list	*ls_3;

	ls_2 = (void *)0;
	if (*begin_list != 0)
	{
		ls_1 = *begin_list;
		ls_2 = ls_1->next;
		ls_1->next = (void *)0;
	}
	while (ls_2)
	{
		ls_3 = ls_2->next;
		ls_2->next = ls_1;
		ls_1 = ls_2;
		ls_2 = ls_3;
	}
	*begin_list = ls_1;
}

char    *ft_cut_last(char *str)
{
	char *buf;
	int i;

	i = 0;
	buf = (char*)malloc(sizeof(char) * (ft_strlen(str) - 1));
	while (i < ft_strlen(str) - 1)
	{
		buf[i] = str[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

t_list *ft_from_oper_to_steck_1(t_list *steck_oper, t_list *steck)
{
	while (*(steck_oper->data) != '0')
	{
		ft_list_push_front(&steck, steck_oper->data);
		steck_oper = steck_oper->next;
	}
	return (steck);
}

t_list      *ft_from_oper_to_steck_2(t_list **steck_oper, t_list *steck, char *buf)
{
	char *ptr;

	ptr = (*steck_oper)->data;
	while (ft_priority(*buf) <= ft_priority(*ptr))
		ft_list_push_front(&steck, ft_pop(&(*steck_oper)));
	ft_list_push_front(&(*steck_oper), buf);
	return (steck);
}

t_list	*ft_pshe_pshe(char *str, t_list	*steck_oper, t_list	*steck, char *buf)
{
	steck_oper = ft_create_elem("0");
	while(*str != '\0')
	{
		buf = ft_strdup(str);
		if (*buf >= '(' && *buf <= '/')
		{
			if (*buf == '(')
			{
				ft_list_push_front(&steck_oper, "(");
				str++;
				continue;
			}
			else if (ft_priority(*buf) > ft_priority(*(steck_oper->data)))
				ft_list_push_front(&steck_oper, buf);
			else
			{
				while (ft_priority(*buf) <= ft_priority(*(steck_oper->data)))
					ft_list_push_front(&steck, ft_pop(&steck_oper));
				ft_list_push_front(&steck_oper, buf);
			}
		}
		else
		{

			if (*(buf + ft_strlen(buf) - 1) == ')')
			{
				ft_list_push_front(&steck, ft_cut_last(buf));
				while (*(steck_oper->data) != '(')
					ft_list_push_front(&steck, ft_pop(&steck_oper));
				steck_oper = steck_oper->next;
			}
			else
				ft_list_push_front(&steck, buf);
		}
		str = str + ft_strlen(buf);
		if (*str == ' ')
			str++;
	}
	printf("kek");
	return (ft_from_oper_to_steck_1(steck_oper, steck));
}

char    *ft_strcat(char *str1, char *str2)
{
	char *str_cat;
	int len;
	int i;

	i = 0;
	len = ft_strlen(str1) + ft_strlen(str2) - 1;
	str_cat = (char*)malloc(sizeof(char) * len);
	while (str1[i] != '\0')
	{
		str_cat[i] = str1[i];
		i++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		str_cat[i + ft_strlen(str1)] = str2[i];
		i++;
	}
	str_cat[i + ft_strlen(str1)] = '\0';
	return (str_cat);
}

char    *ft_kurwa(t_list *pol_note)
{
	int len;
	char *result;

	len = ft_list_size(pol_note);
	result = pol_note->data;
	pol_note = pol_note->next;
	result = ft_strcat(result, " ");
	while(pol_note)
	{
		result = ft_strcat(result, pol_note->data);
		pol_note = pol_note->next;
		result = ft_strcat(result, " ");
	}
	return (result);
}
