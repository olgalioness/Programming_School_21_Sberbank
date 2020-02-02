/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RUSH00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cerodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 20:50:16 by cerodrig          #+#    #+#             */
/*   Updated: 2018/03/31 20:50:21 by cerodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_line(char a, char b, char c, int x)
{
    if (x > 0)
    {
        ft_putchar(a);
    }
    while (x - 2 > 0)
    {
        ft_putchar(b);
        x--;
    }
    if (x > 1)
    {
        ft_putchar(c);
    }
    ft_putchar('\n');
}

int        ft_atoi(const char *str)
{
    int i;
    int nbr;
    int negative;

    nbr = 0;
    negative = 0;
    i = 0;
    while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') || \
            (str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
        i++;
    if (str[i] == '-')
        negative = 1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        nbr *= 10;
        nbr += (int)str[i] - '0';
        i++;
    }
    if (negative == 1)
        return (-nbr);
    else
        return (nbr);
}

void    rush(int x, int y)
{

    if (x <= 0 || y <= 0)
    {
        return ;
    }
    ft_print_line('o', '-', 'o', x);
    while (y - 2 > 0)
    {
        ft_print_line('|', ' ', '|', x);
        y--;
    }
    if (y > 1)
    {
        ft_print_line('o', '-', 'o', x);
    }
}

int        main(int argc, char **argv)
{
    if (argc == 3)
    {
        rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
    }
    return (0);
}
