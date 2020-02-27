//
//  ft_putnbr_base.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

void    ft_putchar(char c);

int        len(char *base)
{
    int i;
    int j;
    
    i = 0;
    while (base[i] != '\0')
    {
        j = i + 1;
        while (base[j] != '\0')
        {
            if (base[i] == base[j])
                return (-1);
            ++j;
        }
        if (base[i] == '+' || base[i] == '-' || base[i] < 32)
            return (-1);
        ++i;
    }
    i = 0;
    while (base[i] != '\0')
        ++i;
    return (i);
}

void    i_base(int nbr, int base, char *chars)
{
    if (nbr < base)
    {
        ft_putchar(chars[nbr % base]);
    }
    else
    {
        i_base(nbr / base, base, chars);
        ft_putchar(chars[nbr % base]);
    }
}

void    ft_putnbr_base(int nbr, char *base)
{
    int l;
    
    l = len(base);
    if (l >= 2)
    {
        if (nbr == -2147483648)
        {
            ft_putchar('-');
            i_base((nbr / l) * -1, l, base);
            ft_putchar(base[nbr % l * -1]);
        }
        else if (nbr < 0)
        {
            ft_putchar('-');
            i_base(nbr * -1, l, base);
        }
        else
            i_base(nbr, l, base);
    }
}
