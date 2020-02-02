/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zanyda <darrnokturna@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 20:08:58 by zanyda            #+#    #+#             */
/*   Updated: 2020/01/18 20:08:58 by zanyda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i_dest;
	unsigned int i_src;
	unsigned int r_size;
	unsigned int o_size;

	i_dest = 0;
	i_src = 0;
	r_size = 0;
	while (dest[i_dest] != '\0')
    {
        i_dest++;
    }
	o_size = i_dest;
	while (src[r_size] != '\0')
    {
		r_size++;
    }
	if (i_dest >= size)
    {
		return (size + r_size);

    }
	while (src[i_src] != '\0' && i_dest + i_src < size)
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	return (r_size + o_size);
}