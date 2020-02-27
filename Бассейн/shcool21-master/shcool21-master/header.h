
////////// 42 header

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>


void			ft_putchar(char c);
int				ft_strlen(char *str);
void			ft_putstr_new(char *str);


typedef struct	s_data
{
	int		**coords;
	int		size[2];
	char	chars[3];
}				t_data;

int				str_to_nbr(char **str);
void			read_first(char *str, t_data *dat);
void			read_map(t_data *dt);
int				map_is_valid(t_data *dat, char **str, int *i, int *k);
void			map_to(char *str, t_data *dat);
void			return_map(t_data *dat, int *answer);
int				kubik(t_data *dat, int i, int k, int total);
int				kubik_s(t_data *dat, int i, int k);
void			math(t_data *dat);
char			str_add(char *dest, char *content);
char			*read_file(char something);

#endif
