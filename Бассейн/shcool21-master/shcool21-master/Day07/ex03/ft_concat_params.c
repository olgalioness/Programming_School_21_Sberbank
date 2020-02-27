/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjerde <jjerde@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 22:14:02 by jjerde            #+#    #+#             */
/*   Updated: 2018/09/27 22:24:19 by jjerde           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		z;
	char	*result;

	z = 0;
	while (z < argc)
	{
		j = 0;
		while (argv[j])
		{
			j++;
			z++;
		}
	}
	result = (char *)malloc(sizeof(*result) * (z + 1));
	i = 0;
	while (i < argc - 1)
	{
		result[i] = ft_strcat(result, argv[i + 1]);
		i++;
	}
	return (result);
}
