int count_alen(char *s)
{
	int count = 0;

	while (*s)
	{
		if (*s != 'a')
			count++;
		s++;
	}
	return (count);
}
