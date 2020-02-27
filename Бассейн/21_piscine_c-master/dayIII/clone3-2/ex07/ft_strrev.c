/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 12:23:19 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/01 09:42:57 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *a, char *b);

int	last_index(char *str);

char	*ft_strrev(char *str);

void	ft_swap(char *a, char *b)
{
	char add;

	add = *a;
	*a = *b;
	*b = add;
}

int		last_index(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i - 1);
}

char	*ft_strrev(char *str)
{
	int front_i;
	int back_i;

	front_i = 0;
	back_i = last_index(str);
	while (front_i != back_i && front_i != back_i + 1)
	{
		ft_swap(&str[++front_i - 1], &str[--back_i + 1]);
	}
	return (str);
}
