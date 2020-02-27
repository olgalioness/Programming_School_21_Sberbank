//
//  ft_takes_place.c
//  21_school
//
//  Created by Татьяна Исрапилова on 25/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#include <stdio.h>

void    ft_takes_place(int hour)
{
    

    printf("THE FOOLOWING TAKES PLACE BERWEEN ");
    if (hour == 24 || hour == 0)
        printf("11.00 P.M. AND 1.00 A.M.\n");
    else if (hour == 23)
        printf("%d P.M. AND 0.00 A.M.\n", hour - 13);
    else if (hour == 11)
        printf("%d A.M. AND 12.00 P.M.\n", hour - 1);
    else if (hour == 13)
        printf("12 P.M. AND %d.00 P.M.\n", hour - 11);
    else if ((hour - 1) >= 0 && (hour + 1) < 12)
        printf("%d.00 A.M. AND %d.00 A.M.\n", hour - 1, hour + 1);
    else if ((hour - 1 >= 12) && (hour + 1) > 12)
        printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 13, hour - 11);
    else if ((hour - 1 < 12) && (hour + 1) >= 12)
        printf("%d.00 A.M. AND %d.00 P.M.\n", hour - 1, hour - 11);
}
