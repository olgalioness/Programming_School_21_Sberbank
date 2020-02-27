/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshanae <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 13:50:31 by bshanae           #+#    #+#             */
/*   Updated: 2019/02/03 11:46:06 by bshanae          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void  	cp_field(int *src, int *dest)
{
	int i;

  	i = 0;
  	while (i < 8)
  	{	
    	dest[i] = src[i];
    	i++;
  	}
}

int 	full_field(int *f)
{
  	int i;

  	i = 0;
  	while (i < 8)
	{
    	if (f[i] == 0) 
			return (0);
		i++;
	}	
  	return (1);  
}

int 	is_valid_pos(int pos, int f[])
{
  	int i;
  	int j;
  	
  	i = 0;
	while (i < 8)
	{
		if (f[i] == 0)
		{
			if (i == 0)
			    return (1);
			    
			j = i - 1;
			
			while (j >= 0)
			{
				if (f[j] != pos)
				{
					if (pos != f[j] + (i -j) && pos != f[j] - (i -j))
					    {}
					else 
					    return (0);
				}
				else 
					return (0);
				j--;
			}

			return (1);
		}
		i++;
	}	

	return (2);
}

void	put_pos(int pos, int f[])
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (f[i] == 0)
		{
			f[i] = pos;
			break; 
		}
		i++;
	}
}

int	do_recursion(int parent_f[])
{
	int i;
	int res;

	if (field_full(parent_f) == 1)
		return (1);

	i = 0;
	res = 0;
	while (i < 8)
	{
		if (is_valid_pos(i + 1, parent_f) ==  1)
		{
			int child_f[8];
			cp_field(parent_f, child_f);
			put_pos(i + 1, child_f);
			res += do_recursion(child_f);
		}
		i++;
	}
	return (res);
}

int	ft_eight_queens_puzzle(void)
{
	int empty_field[8] = {0,0,0,0,0,0,0,0};

	return (do_recursion(empty_field));
}
