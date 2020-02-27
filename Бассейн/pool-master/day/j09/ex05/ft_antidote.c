//
//  ft_antidote.c
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int ft_antidote(int i, int j, int k)
{
    if (i == j)
        return (i);
    else if (j == k)
        return(j);
    else if (i == k)
        return (k);
    else if ((i > j && i < k) || (i > k && i < j))
        return (i);
    else if ((j > i && j < k) || (j > k && j < i))
        return (j);
    else
        return (k);
}
