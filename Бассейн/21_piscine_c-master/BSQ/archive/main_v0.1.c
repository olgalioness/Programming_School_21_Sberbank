# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

#include <stdio.h> // DEV
#include <time.h> // DEV

// DEV //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void	dev_print_matr(int **m, int h, int w)
{
	int i;
	int j;
	
	i = 0;
	while (i < h)
	{
		j = 0;
		while (j < w)
		{
			printf("%d ", m[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}

void	dev_print_arr(int *arr, int l)
{
	int i;

	i = 0;
	while (i < l)
		printf("%d ", arr[i++]);
	printf("\n");
}

// VALID ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef enum	e_res_valid
{
	ok,
	error
}				t_res_valid;	

typedef struct		s_map_info
{
	int				line_n;
	int				line_l;
	char			symb[3];
	char			*map_start;
}					t_map_info;


// SQ ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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


// PRINT ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_sq(int **matr, t_sq *sq)
{
	int	add_i;
	int add_j;

	add_i = 0;
	while (add_i < sq->size)
	{
		add_j = 0;
		while (add_j < sq->size)
		{
			matr[sq->y + add_i][sq->x + add_j] = 2;
			add_j++;
		}
		add_i++;
	}
}

void	print_matr(int **matr, t_map_info *info)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < info->line_n)
	{
		j = 0;
		while (j < info->line_l)
			ft_putchar(info->symb[matr[i][j++]]);
		ft_putchar('\n');
        i++;
	}
}

void	print_error()
{
	//write(1, "map error\n", 10); // DEV
	printf("MAP ERROR\n");
}

// VALID ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define IS_DIGIT(x) (x >= '0' && x <= '9')

t_res_valid
	is_valid_definition_a(char *str, t_map_info *info)
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

t_res_valid
		is_valid_definition_b(t_map_info *info)
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

t_res_valid
		is_valid_map(t_map_info *info)
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
	return (line_c == info->line_n) ? (ok) : (error);
}

t_res_valid	is_valid(char *str, t_map_info *info)
{
	if (is_valid_definition_a(str, info) == error)
		return (error);
	if (is_valid_definition_b(info) == error)
		return (error);
	if (is_valid_map(info) == error)
		return (error);
	return (ok);
}

// MEMORY UTILS /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int		**allocate_matr(int height, int width)
{
	int	**res;
	int	i;	

	i = 0;
	if (!(res = (int **)malloc(sizeof(int *) * height)))
		return (NULL);
	while (i < height)
		res[i++] = (int *)malloc(sizeof(int) * width);
	return (res);
}

void	destroy_matr(int ***m, int height)
{
	height = 0;
	while (height-- > 0)
		free((*m)[height]);
	free(*m);
	(*m) = NULL;
}

// CONVERT //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int		convert_symb(char c, t_map_info *info)
{
	int		i;

	i = 0;
	while (i < 3)
	{
		if (info->symb[i] == c)
			return (i);
		i++;
	}
	return (-21);
}

void	fill_matr(int **matr, t_map_info *info)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	str = info->map_start;
	while (i < info->line_n)
	{
		j = 0;
		while (j < info->line_l)
		{
			matr[i][j] = convert_symb(*str, info);
			str += (*(str + 1) == '\n') ? (2) : (1);
			j++;
		}		
		i++;	
	}
}

int		**convert_map(t_map_info *info)
{
	int		**matr;

	if (!(matr = allocate_matr(info->line_n, info->line_l)))
		return (NULL);
	fill_matr(matr, info);
	return (matr);
}

// SOLVE ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void	find_row_sq(int *dist, t_map_info *info, int i, t_sq *temp_sq)
{
	int		j;
	int		shift_size;
	int		limit_size;

	j = 0;
	clean_sq(temp_sq);
	while (j < info->line_l)
	{
		//printf("find_row_sq : dist[%d] = %d\n", j, dist[j]); //DEV
		if (dist[j] > temp_sq->size)
		{
			shift_size = 1;
			limit_size = dist[j];
			//while (j + pos_size <= info->line_l && pos_size <= dist[j + pos_size - 1] && pos_size <= dist[j])
				//pos_size++;
			while (j + shift_size <= info->line_l)
			{
				//printf("%d ", shift_size);
				if (dist[j + shift_size - 1] < limit_size)
					limit_size = dist[j + shift_size - 1];
				if (shift_size > limit_size)
					break;
				shift_size++;
			}
			//printf("find_row_sq : s_size = %d, i = %d, j = %d\n", shift_size, i, j); // DEV
			if (shift_size - 1 > temp_sq->size)
				update_sq(temp_sq, j, i, shift_size - 1);
		}
		j++;
	}
	//printf("temp_sq = (%d, %d, %d)\n", temp_sq->x, temp_sq->y, temp_sq->size); //DEV
}

int		*get_dist(int **matr, t_map_info *info, int i)
{
	int j;
	int ii;
	int *arr;

	j = 0;
	arr = (int *)malloc(sizeof(int) * info->line_l);
	while (j < info->line_l)
	{
		ii = i;
		while (ii < info->line_n && matr[ii][j] == 0)
			ii++;
		arr[j] = ii - i;
		j++;
	}
	return (arr);
}

void	solve(int **matr, t_map_info *info)
{
	int i;
	int *dist;
	t_sq *row_sq;
	t_sq *final_sq;

	i = 0;
	dist = NULL;
	row_sq = create_sq();
	final_sq = create_sq();
	while (i < info->line_n)
	{
		dist = get_dist(matr, info, i);
		//printf("solve : analysis of i = %d : \n", i); // DEV
		//dev_print_arr(dist, info->line_l); // DEV
		find_row_sq(dist, info, i, row_sq);
		if (row_sq->size > final_sq->size)
			copy_sq(row_sq, final_sq);
		printf("final_sq = (%d, %d, %d)\n", final_sq->x, final_sq->y, final_sq->size); // DEV
		i++;
	}
	put_sq(matr, final_sq);
	destroy_sq(&row_sq);
	destroy_sq(&final_sq);
}
	


// STR UTILS  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

	i = 0;
	if (!dest || !src)
		return ;
	l = length_str(src);
	while (i <= l)
	{
		dest[i] = src[i];
		i++;
	}
}

void	n_concat_str(char *str1, char *str2, int n)
{
	int i1;
	int i2;

	i1 = length_str(str1);
	i2 = 0;
	while (str2[i2] && i2 < n)
		str1[i1++] = str2[i2++];
	str1[i1] = 0;
}

typedef enum	s_clone_mod
{
				no_clone = 0,
				clone
}				t_clone_mod;

void	reallocate_str(char **str, long size)
{
	char	*clone;
	
	clone = (char *)malloc(sizeof(char) * length_str(*str) + 1);
	copy_str(*str, clone);
	free(*str);
	*str = (char *)malloc(sizeof(char) * size);
	copy_str(clone, *str);		
	free(clone);
}

void	reallocate_d_str(char **str, long size)
{
	free(*str);
	*str = (char *)malloc(sizeof(char) * size);
}

void	reallocate_str0(char **str, int size)
{
	char	*clone;
	
	clone = (char *)malloc(sizeof(char) * size);
	copy_str(*str, clone);
	free(*str);
	*str = (char *)malloc(sizeof(char) * size);
	copy_str(clone, *str);
	free(clone);
}

void	destroy_str(char **str)
{
	free(*str);
	*str = NULL;
}

// MAIN FUNCS ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define BUFF_SIZE 21
#define BUFF_MULTI 7

char	*read_stream(int fd)
{
	char	*buff;
	int		multi;
	long	size;
	char	*final;

	multi = 1;
	buff = (char *)malloc(sizeof(int) * BUFF_SIZE + 1);
	final = NULL;
	while ((size = read(fd, buff, BUFF_SIZE * multi)))
	{
		multi *= (multi < 400000000) ? (BUFF_MULTI) : (0);
		buff[size] = '\0';
		reallocate_str(&final, length_str(final) + size + 1);
		n_concat_str(final, buff, size);
		reallocate_d_str(&buff, BUFF_SIZE * multi + 1);
	}
	return (final);
}

#define BUFF_SIZE0 8000000

char	*read_stream0(int fd)
{
	char	buff[BUFF_SIZE0 + 1];
	int		size;
	char	*final;

	final = NULL;
	while ((size = read(fd, buff, BUFF_SIZE0)))
	{
		buff[size] = '\0';
		reallocate_str(&final, length_str(final) + size + 1);
		n_concat_str(final, buff, size);
	}
	return (final);
}

t_res_valid
		process_map(int fd)
{
	t_map_info	info;
	char		*map_str;
	char		*m0;
	int			**map_matr;

	if (!(map_str = read_stream(fd)))
			return (error);
	if (is_valid(map_str, &info) == error)
		return (error);	
	printf("process_map : ln = %d, ll = %d, symb= {%c%c%c}, map_start = {%c%c}\n", 
			info.line_n, info.line_l, info.symb[0], info.symb[1], info.symb[2], *(info.map_start), *(info.map_start + 1));
	map_matr = convert_map(&info);
	printf("\nprocess_map : matr :\n"); // DEV
	dev_print_matr(map_matr, info.line_n, info.line_l); // DEV
	solve(map_matr, &info);
	printf("\nprocess_map : solved matr :\n"); // DEV
	dev_print_matr(map_matr, info.line_n, info.line_l); // DEV
	print_matr(map_matr, &info);
	destroy_str(&m0); // DEV
	destroy_str(&map_str);
	destroy_matr(&map_matr, info.line_n);
	return (ok);
}

t_res_valid	
		process_file(char *file_name)
{
	int fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (error);
	if (process_map(fd) == 1)
		return (error);
	if (close(fd) == -1)
		return (error);
	return (ok);
}

void	read_from_term()
{
	if (process_map(0) == error)
		print_error();
}

void	read_from_file(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{	
		//printf("\n====================================================================== FILE [%s] ======================================================================\n", argv[i]);
		if (process_file(argv[i++]) == error)
			print_error();
	}
}

// MAIN /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int		not_main(int argc, char **argv)
{
	if (argc < 2)
		read_from_term();
	else
		read_from_file(argc, argv);
	return (0);
}

// TEST /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double g1 = 0;
double g2 = 0;

t_res_valid
		dev_process_map(int fd, int mod)
{
	t_map_info	info;
	char		*map_str;
	char		*m0;
	int			**map_matr;

	if (mod == 0)
	{
		clock_t m1 = clock(); // DEV
		if (!(map_str = read_stream(fd)))
			return (error);
		clock_t m2 = clock(); // DEV
		double d = (double)(m2 - m1) / CLOCKS_PER_SEC;
		g1 = d;
		printf("d(%d) = %f\t", mod, d);
	}
	if (mod == 1)
	{
		clock_t m1 = clock(); // DEV
		if (!(m0 = read_stream0(fd)))
			return (error);
		clock_t m2 = clock(); // DEV
		double d = (double)(m2 - m1) / CLOCKS_PER_SEC;
		g2 = d;
		printf("d(%d) = %f\t", mod, d);
	}
	return (ok);
}


t_res_valid	
		dev_process_file(char *file_name, int mod)
{
	int fd;

	fd = open(file_name, O_RDONLY);
	if (dev_process_map(fd, mod) == 1)
		return (error);
	return (ok);
}


int		main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	dev_process_file(argv[1], atoi(argv[2]));
	//dev_process_file(argv[2], 1);
	//printf("diff = %f\n", g1 - g2);
}
