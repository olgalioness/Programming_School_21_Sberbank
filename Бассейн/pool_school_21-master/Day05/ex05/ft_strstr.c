/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhaired <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 18:12:22 by lhaired           #+#    #+#             */
/*   Updated: 2019/08/05 18:22:06 by lhaired          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*needle_ptr;
	char	*haystack_ptr;
	int		trigger;

	needle_ptr = 0;
	haystack_ptr = 0;
	if (str == 0 || to_find == 0)
		return (0);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			trigger = 1;
			needle_ptr = to_find;
			haystack_ptr = str;
			while (*needle_ptr && *haystack_ptr)
			{
				trigger = trigger && (*needle_ptr++ == *haystack_ptr++);
			}
			if (trigger)
				return (str);
		}
		str++;
	}
	return (0);
}
