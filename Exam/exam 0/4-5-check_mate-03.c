#include "4-5-check_mate-03.h"

static void	free_chessboard(char **tab)
{
	int line;

	line = 0;
	while (tab[line])
	{
		free(tab[line]);
		line++;
	}
	free(tab);
}

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**copy(char *argv[], char **tab)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (argv[j])
	{
		tab[i] = ft_strcpy(tab[i], argv[j]);
		i++;
		j++;
	}
	tab[i] = NULL;
	return (tab);
}

static int	check_chessboard(char **tab)
{
	int i;
	int j;
	int size;

	i = 0;
	size = ft_strlen(tab[i]);
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == 'R' && check_rook(tab, i, j))
				return (1);
			if (tab[i][j] == 'B' && check_bishop(tab, i, j, size))
				return (1);
			if (tab[i][j] == 'P' && check_pawn(tab, i, j))
				return (1);
			if (tab[i][j] == 'Q' && (check_rook(tab, i, j) ||
						check_bishop(tab, i, j, size)))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int			main(int argc, char *argv[])
{
	char	**tab;
	int		i;

	i = 0;
	if (argc != 1)
	{
		if (!(tab = malloc(sizeof(char *) * argc)))
			return (-1);
		while (i < argc - 1)
		{
			if (!(tab[i] = malloc(sizeof(char) * argc - 1)))
				return (-1);
			i++;
		}
		tab = copy(argv, tab);
		if (check_chessboard(tab) == 1)
			write(1, "Success", 7);
		else
			write(1, "Fail", 4);
		free_chessboard(tab);
	}
	write(1, "\n", 1);
	return (0);
}
