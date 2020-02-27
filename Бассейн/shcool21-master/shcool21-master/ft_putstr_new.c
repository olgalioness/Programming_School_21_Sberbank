
///////// 42 header //////////

#include "includes/header.h"

void	ft_putstr_new(char *str)
{
	write(1, str, ft_strlen(str));
}
