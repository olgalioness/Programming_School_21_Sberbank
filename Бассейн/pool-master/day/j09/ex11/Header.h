//
//  Header.h
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

#ifndef FT_PERSO_H
# define FT_PERSO_H

# define SAVE_AUSTIN_POWERS "SAVE_AUSTIN_POWERS"

# include <string.h>

typedef struct      s_perso
{
    char            *name;
    double          life;
    int             age;
    char            *profession;
}                   t_perso;

#endif
