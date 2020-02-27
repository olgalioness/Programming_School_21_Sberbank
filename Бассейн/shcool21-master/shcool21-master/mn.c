
/// 42 blah blah blah

#include "includes/header.h"

char	str_add(char *dest, char *content)
{
	char	*tmp;
	int		size;
	int		i;

	i = -1;
	size = ft_strlen(dest) + ft_strlen(content);
	if ((tmp = (char *)malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	while (++i < size)
	{
		if (*dest)
		{
			tmp[i] = *dest;
			++s;
		}
		else if (*content)
		{
			tmp[i] = *content;
			++content;
		}
		else
			tmp[i] = '\0';
	}
	return (tmp);
}

char	*read_file(char something)
{
	char	buff[BUFFER + 1];
	int		link;
	char	*content;
	int		res;

	res = NULL;
	if (link = open(mapfile, O_RDONLY) < 0)
	{
		ft_putstr("I can't read file... :(");
		return (NULL);
	}
	while	(res = read(link, buff, BUFFER))
	{
		buff[res] = '\0';
		content = str_add(content, buff);
	}
	return (content);
}

int		main(int argc, char **argv)
{
	t_data	dat;
	char	*arr;

	if (argc != 2)
	{
		ft_putstr("Invalid input...");
		return (0);
	}
	arr = read_file(argv[1]);
	read_first(arr, &dat);
	return (0);
}
