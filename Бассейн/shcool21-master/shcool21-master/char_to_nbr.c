
//////// 42 header///////

#include "includes/header.h"

int	str_to_nbr(char **str)
{
	int	result;

	result = 0;
	while (**str && **str >= '0' && **str <= '9')
	{
		result = (result * 10) + (**str - '0');
		++(*str);
	}
	return (result);
}
