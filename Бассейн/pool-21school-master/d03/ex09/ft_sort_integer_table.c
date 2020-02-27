void    ft_sort_integer_table(int *tab, int size);

void    ft_sort_integer_table(int *tab, int size)
{
    int buf;
    int i;
    int j;

    while (i < size)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                buf = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = buf;
            }
            j++;
        }
        i++;
    }
}