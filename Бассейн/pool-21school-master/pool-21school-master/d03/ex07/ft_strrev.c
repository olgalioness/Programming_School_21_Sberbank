char    *ft_strrev(char *str);
int     ft_strlen(char *str);

char    *ft_strrev(char *str)
{
    int     len;
    int     i;
    char    buf;

    len = ft_strlen(str) - 1;
    i = 0;
    while (i <= (len - 1) / 2)
    {
        buf = str[i];
        str[i] = str[len - i];
        str[len - i] = buf;
        i++;
    }
    return str;
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}
