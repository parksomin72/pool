int		max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	unsigned int i;
	int max_val;

	i = 0;
	max_val = tab[0];

	while (i < len)
	{
		if (max_val < tab[i])
			max_val = tab[i];
		i++;
	}
	return (max_val);
}
