char	error(char )	
{
	while (j <= 8)
		{
			if (sudoku[i][j] < '1' || sudoku[i][j] > '9')
	   			return (0);
			j++;
		}
	i++;
	return (sudoku);
}
