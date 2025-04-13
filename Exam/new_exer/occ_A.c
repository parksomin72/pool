int occ_A(char *s)
{
	int count = 0;

	while (*s)
	{
		if (*s == 'A')
			count++;
		s++;
	}
	return (count);
}
