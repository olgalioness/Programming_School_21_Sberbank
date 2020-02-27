//
//  opp2.h
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#ifndef OPP2_H
# define OPP2_H

typedef struct    s_opp
{
    char        *s;
    void        (*f)(int, int);
}                t_opp;

void            ft_putchar(char c);
void            ft_putstr(char *str);
int             ft_strcmp(char *s1, char *s2);
void            ft_putnbr(int nb);
int             ft_atoi(char *str);

void            ft_add(int a, int b);
void            ft_sub(int a, int b);
void            ft_mul(int a, int b);
void            ft_div(int a, int b);
void            ft_mod(int a, int b);
void            ft_usage(int a, int b);

#endif
