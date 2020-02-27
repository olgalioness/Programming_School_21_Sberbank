/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjamie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:55:10 by sjamie            #+#    #+#             */
/*   Updated: 2019/06/27 11:10:17 by edrowzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# define BUFF_SIZE 4096
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>

typedef struct		s_fline
{
	int				rows_count;
	int				row_len;
	int				offset;
	int				error;
	char			c1;
	char			c2;
	char			c3;
}					t_fline;

typedef struct		s_list
{
	char			data;
	struct s_list	*next;
}					t_list;

int					detect_max_str_len(char *str, int i);
t_fline				detect_map_params(char *str, int i);
char				**create_arr(char *str, t_fline test);
int					ft_strlen(char *s);
char				*ft_strconcat(char *s1, char *s2);
char				*map_open(char *input_file, t_fline test, int i,
			int len_chars);
int					map_open_count(char *input_file, t_fline test);
char				*map_open_from_console(void);
void				ft_print_map(int *arr, char **str, t_fline test);
int					m3(int a, int b, int c);
void				ft_pos_detection(int *pos, int num, int i, int j);
int					**ft_int_arr_init(t_fline test);
void				ft_count_cells(char **str, t_fline test, int i, int j);
int					check_rowslen_symbols(char *str, t_fline test,
			int flag, int count);
int					ft_atoi(char *str);
t_fline				check_errors_start(char *str, t_fline test);
int					check_no_nums_first(char *str, t_fline test);
void				ft_putstr(char *str);
int					errno_errors(int rubb, t_fline test);
int					starter(int argc, char *argv[], int i);
void				mem_free(int **arr, t_fline test);
char				*map_open_from_console(void);
t_list				*ft_create_elem(char data);
char				*return_struct_console(t_list *struct_list, char *str);
void				write_struct_console(t_list **begin_list, char data);

#endif
