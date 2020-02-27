
/////////42 header//////////

#include "includes/header.h"

void	read_first(char *str, t_data *dat)
{
	dat->size[0] = 0;
	if (!(str[0] >= '0' && str[0] <= '9'))
	{
		ft_putstr_new("Map file is invalid or corrupted :(");
		return ;
	}
	dat->size[1] = str_to_nbr(&str);
	if (!(str[0] && str[1] && str[2] && str[3] == '\n'))
	{
		ft_putstr_new("Map file is invalid for some reasons...");
		return ;
	}
	dat->chars[0] = str[0];
	dat->chars[1] = str[1];
	dat->chars[2] = str[2];
	str += 4;
	while (str[dat->size[0]] && str[dat->size[0]] != '\n')
		dat->size[0]++;
	read_map(str, dat);
}

void	read_map(t_data *dt)
{
	int	i;

	i = -1;
	if ((dt->coords = (int **)malloc(sizeof(int *) * dt->size[1])) == NULL)
	{
		ft_putstr_new("Can't do malloc =(");
		return ;
	}
	while (++i < dt->size[1])
	{
		if ((dt->coords[i] = (int *)malloc(sizeof(int) * dt->size[0])) == NULL)
		{
			ft_putstr_new("Can't do malloc =(");
			return ;
		}
	}
}

int		map_is_valid(t_data *dat, char **str, int *i, int *k)
{
	if ((**str == '\n' && *k != dat->size[0]) ||
			(**str != '\n' && k == dat->size[0]))
	{
		ft_putstr_new("Map is invalid!");
		return NULL;
	}
	if (**s == '\n')
	{
		++(*i);
		++(*str);
		*j = 0;
	}
	if (*i >= dat->size[1] || !(**str) || **str == '\n')
		return (1);
	if (!(**str == dat->chars[0] || *str == dat->chars[1]))
	{
		ft_putstr_new("Map is invalid!");
		return NULL;
	}
	return (0);
}

void	map_to(char *str, t_data *dat)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	read_map(dat);
	while (*str)
	{
		if (map_is_valid(dat, &str, &i, &k))
			return ;
		if (*str == dat->chars[0])
			dat->coords[i][k] = 0;
		else if (*str == dat->chars[1])
			dat->coords[i][k] = 1;
		++k;
		++i;
	}
}
