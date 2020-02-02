/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:09:13 by marvin            #+#    #+#             */
/*   Updated: 2020/01/15 19:09:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*scan_h;

	scan_h = str;
	while (*scan_h)
	{
		i = 0;
		while (to_find[i] && to_find[i] == scan_h[i])
			i++;
		if (!to_find[i])
			return (scan_h);
		scan_h++;
	}
	return ((void *)0);
}