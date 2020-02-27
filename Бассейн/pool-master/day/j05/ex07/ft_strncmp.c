//
//  ft_strncmp.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int     i;
    int     j;
    int     k;
    
    j = 0;
    k = n;
    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && i < k)
    {
        if (s1[i] != s2[i])
        {
            j = s1[i] - s2[i];
            return (j);
        }
        i++;
    }
    return (0);
}
