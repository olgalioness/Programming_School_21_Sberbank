//
//  ft_strcmp.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int        ft_strcmp(char *s1, char *s2)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
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
