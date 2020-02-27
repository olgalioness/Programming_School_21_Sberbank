char	*read_term(char *file_name)
{

}

int		main(int argc, char **argv)
{
	int 	i;
	char	*map_str;
	int		**map_matr;

	if (argc < 2)
		{} // read from input
	i = 1;
	while (i < argc)
	{	
		map_str = read_term(argv[i]);
		if (!is_valid(map_str))
		{
			print_error();
			continue;
		}
		map_matr = convert_map(map_str);
		solve(map_matr);
	}		
}
