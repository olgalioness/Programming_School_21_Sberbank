//
//  ft_count_if.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

 int ft_count_if(char **tab, int(*f)(char*));
{
    int     i;
    int     count;
    
    i = 0;
    count = 0;
    while (tab[i])
    {
        if ((*f)(tab[i]) == 1)
            count++;
        i++;
    }
    return (count);
}
