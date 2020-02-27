//
//  ft_atoi.c
//  21_school
//
//  Created by Татьяна Исрапилова on 24/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int     ft_atoi(char *str)
{
    int     i;
    int     nbr;
    int     sign;
    
    i = 0;
    nbr = 0;
    sign = 1;
    while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' ||
           str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        nbr *= 10;
        nbr = nbr + (int)str[i] - '0';
        i++;
    }
    return(nbr * sign);
}
