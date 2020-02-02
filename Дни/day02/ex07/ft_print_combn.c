/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 00:13:23 by zoulhafi          #+#    #+#             */
/*   Updated: 2018/09/03 00:20:33 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void    ft_print_number(int *p_tab, int p_nb_arr)
{
        int count;

        count = 0;
        while (count < p_nb_arr)
        {
            ft_putchar(p_tab[count] + 48);
            count++;
        }
}

void    ft_print_n_numbers(int* p_tab, int p_foc_indx, int p_nb_indx)
{
        int     count;

        while (1) 
        {
            while ((p_tab[p_foc_indx] == (10 + (p_foc_indx - p_nb_indx)))
                    && p_foc_indx >= 0)
            {
                p_foc_indx--;
            }

            if (p_foc_indx < 0)
                break;

            p_tab[p_foc_indx]++;

            count = p_foc_indx + 1;

            while (count <= p_nb_indx)
            {
                p_tab[count] = p_tab[count - 1] + 1;
                count++;
            }

            p_foc_indx = p_nb_indx - 1;

            ft_putchar(',');
            ft_putchar(' ');
            ft_print_number(p_tab, p_nb_indx);
        }
}

void    ft_print_combn(int n)
{
        int     number[9];
        int     foc_indx;
        int     count;

        foc_indx = (n - 1);

        count = 0;
        while (count <= n)
        {
            number[count] = count;
            count++;
        }

        ft_print_number(number, n);

        ft_print_n_numbers(number, foc_indx, n);
}