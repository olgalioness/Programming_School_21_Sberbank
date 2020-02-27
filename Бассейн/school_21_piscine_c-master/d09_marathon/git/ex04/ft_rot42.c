/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskeleto <cskeleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 21:24:26 by cskeleto          #+#    #+#             */
/*   Updated: 2018/08/30 21:33:43 by cskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int	i;
	int y;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		y = 0;
		while (y < 16)
		{
			c = str[i];
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				if (str[i] == 'z')
					str[i] = 'a';
				else if (str[i] == 'Z')
					str[i] = 'A';
				else
					str[i]++;
				y++;
			}
			i++;
		}
		return (str);
	}
}

int		main(void)
{
	ft_rot42("WRYUUYJTHRGEF");
	return (0);
}
