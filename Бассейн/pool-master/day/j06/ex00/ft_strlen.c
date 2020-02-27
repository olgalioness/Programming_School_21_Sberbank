//
//  ft_strlen.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int     ft_strlen(char *str)
{
    int     len;
    
    len = 0;
    while(str[len])
        len++;
    return(len);
}
