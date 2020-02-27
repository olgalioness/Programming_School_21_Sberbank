/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_v1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 11:05:54 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/20 14:03:33 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

#include <stdio.h> // DEV

// PRINT

void	print_error(void)
{
	write(2, "map error\n", 10);
}

// STRUCTS ======================================================================

typedef	struct	s_map_info
{
	int			line_l;
	int			line_n;
	char		symb[3];
	char		*map_start;
	char		*map_end;
}				t_map_info;

typedef enum 	e_realloc_mod
{
				del,
				save
}				t_realloc_mod;

typedef	enum	e_valid
{
				error,
				ok
}				t_valid;

// STR UTILS ===================================================================

int		length_str(char *str)
{
	int		i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	copy_str(char *src, char *dest)
{
	int		i;
	int		l;

	if (!dest || !src)
		return ;
	i = 0;
	l = length_str(src);
	while (i <= l)
	{
		dest[i] = src[i];
		i++;
	}
}

void	n_concat_str(char *str1, char *str2, int n)
{
	int		i1;
	int		i2;

	i1 = length_str(str1);
	i2 = 0;
	while (str2[i2] && i2 < n)
		str1[i1++] = str2[i2++];
	str1[i1] = '\0';
}

void	reallocate_str(char **str, int size, t_realloc_mod mod)
{
	char	*clone;

	if (mod == save)
	{
		clone = (char *)malloc(sizeof(char) * size);
		copy_str(*str, clone);
	}
	free(*str);
	*str = (char *)malloc(sizeof(char) * size);
	if (mod == save)
	{
		copy_str(clone, *str);
		free(clone);
	}
}

void	destroy_str(char **str)
{
	free(*str);
	*str = NULL;
}

// INPUT =======================================================================

#define BUFF_INIT 512
#define BUFF_MULTI 16

char	*read_stream(int fd)
{
	char	*buff;
	char	*final;
	int		buff_m;
	int		buff_s;
	
	buff = (char *)malloc(sizeof(int) * BUFF_INIT + 1);
	final = NULL;
	buff_m = 1;
	while ((buff_s = read(fd, buff, BUFF_INIT * buff_m)))
	{
		buff[buff_s] = '\0';
		buff_m *= (buff_m < 200000000) ? (BUFF_MULTI) : (0);
		reallocate_str(&final, length_str(final) + buff_s + 1, save);
		n_concat_str(final, buff, buff_s);
		reallocate_str(&buff, BUFF_INIT * buff_m + 1, del);
	}
	return (final);
}

// VALID ======================================================================= 

#define IS_DIGIT(x) (x >= '0' && x <= '9')

t_valid	is_valid_definition_a(char *str, t_map_info *info)
{
	int		i;
	int		j;
	
	i = 0;
	info->line_n = 0;
	while (IS_DIGIT(str[i]))
			info->line_n = info->line_n * 10 + (str[i++] - '0');
	if (info->line_n == 0)
		return (error);
	j = 0;
	while (j < 3 && str[i] && str[i] != '\n')
		info->symb[j++] = str[i++];
	if (j != 3 || str[i] != '\n')
		return (error);
	info->map_start = str + i + 1;
	return (ok);
}

t_valid	is_valid_definition_b(t_map_info *info)
{
	if (info->symb[0] == info->symb[1] ||
		info->symb[0] == info->symb[2] ||
		info->symb[1] == info->symb[2])
		return (error);
	return (ok);
}

int		is_valid_char(t_map_info *info, char c)
{
	return (c == info->symb[0] ||
			c == info->symb[1] ||
			c == '\n');
}

t_valid	is_valid_map(t_map_info *info)
{
	char	*str;
	int		line_i;
	int		line_c;
	int		prev_line;

	str = info->map_start;
	line_i = 0;
	line_c = 0;
	prev_line = 0;
	while (*str)
	{
		if (!is_valid_char(info, *str))
			return (error);
		if (*str == '\n')
		{
			if (line_c && line_i != prev_line)
				return (error);
			prev_line = line_i;
			line_i = 0;
			line_c++;
		}
		else 
			line_i++;
		str++;
	}
	info->line_l = prev_line;
	info->map_end = str;
	return (line_c == info->line_n) ? (ok) : (error);
}

t_valid	is_valid(char *str, t_map_info *info)
{
	if (is_valid_definition_a(str, info) == error)
		return (error);
	if (is_valid_definition_b(info) == error)
		return (error);
	if (is_valid_map(info) == error)
		return (error);
	return (ok);
}

// SQ ========================================================================== 

typedef struct s_sq
{
	int			x;
	int			y;
	int			size;	
}				t_sq;

t_sq	*create_sq(void)
{
	t_sq *new;

	new = (t_sq *)malloc(sizeof(t_sq));
	new->x = 0;
	new->y = 0;
	new->size = 0;
	return (new);
}

void	destroy_sq(t_sq **sq)
{
	free(*sq);
	*sq = NULL;
}

void	update_sq(t_sq *sq, int new_x, int new_y, int new_size)
{
	sq->x = new_x;
	sq->y = new_y;
	sq->size = new_size;
}

void	clean_sq(t_sq *sq)
{
	sq->x = 0;
	sq->y = 0;
	sq->size = 0;	
}

void	copy_sq(t_sq *src, t_sq *dest)
{
	dest->x = src->x;
	dest->y = src->y;
	dest->size = src->size;
}


// SOLVE =======================================================================

#define LINE_START(i, x) (i->map_start + (x) * (i->line_l + 1))
#define SIZE(i) (i->map_end - i->map_start)

void	analyze_dist(char *iter, t_map_info *info, int *dist)
{
	int		i;
	int		ii;

	i = 0;
	while (i < info->line_l)
	{
		ii = i;
		while (ii < SIZE(info) && *(iter + ii) == info->symb[0])
			ii += info->line_l + 1;
		printf("ii = %d, i = %d\n", ii, i);
		dist[i] = (ii - i) / info->line_l;	
		i++;
	}
}

void	solve(t_map_info *info)
{
	char	*iter;
	int		*dist;
	t_sq	*row_sq;
	t_sq	*final_sq;

	iter = info->map_start;
	dist = (int *)malloc(sizeof(int) * info->line_l);
	row_sq = create_sq();
	final_sq = create_sq();
	while (iter <= LINE_START(info, info->line_n - 1))
	{
		printf("solve : iter -> %.20s\n", iter);
		analyze_dist(iter, info, dist);
		// EDV
		printf("dist = ");
		for (int k = 0; k < info->line_l; k ++)
			printf("%d ", dist[k]);
		printf("\n");
		// DEV
		iter += info->line_l + 1;
	}
}

// MAIN F ======================================================================


t_valid	process_map(int fd)
{
	t_map_info	info;
	char		*map_str;

	if (!(map_str = read_stream(fd)))
			return (error);
	printf("map :\n%s\n", map_str); // DEV
	if (is_valid(map_str, &info) == error)
		return (error);
	printf("ll = %d, ln = %d, ms -> {%c}\n", info.line_l, info.line_n, *(info.map_start));
	solve(&info);
	destroy_str(&map_str);
	return (ok);
}

t_valid	process_file(char *file_name)
{
	int fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (error);
	if (process_map(fd) == error)
		return (error);
	if (close(fd) == -1)
		return (error);
	return (ok);
}

// MAIN ========================================================================

void	read_from_term()
{
	if (process_map(0) == error)
		print_error();
}


void	read_from_file(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
		if (process_file(av[i++]) == error)
				print_error();
}

int		main(int argc, char **argv)
{
	if (argc < 2)	
		read_from_term();
	else
		read_from_file(argc, argv);
	return (0);
}
