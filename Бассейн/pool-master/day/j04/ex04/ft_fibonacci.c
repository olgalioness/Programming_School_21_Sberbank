//
//  ft_fibonacci.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

int    ft_fibonacci(int index)
{
    if (index == 0)
    {
        return (0);
    }
    else if (index == 1)
    {
        return (1);
    }
    else if (index < 0)
    {
        return (-1);
    }
    else
    {
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
    }
}
