//
//  ft_any.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

 int ft_any(char **tab, int(*f)(char*))
{
    int     i;
    
    i = 0;
    while (tab[i])
    {
        if ((*f)(tab[i]) == 1)
            return (1);
        i++;
    }
    return (0);
}
