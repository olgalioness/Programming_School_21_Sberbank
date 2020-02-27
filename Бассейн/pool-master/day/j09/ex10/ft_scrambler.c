//
//  ft_scrambler.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

void ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
    int x;
    int y;
    int z;
    int n;
    
    x = ***a;
    y = *b;
    z = *******c;
    n = ****d;
    ***a = y;
    *b = n;
    *******c = x;
    ****d = z;
}
