/**
 * create a function that returns the number of 'A' in a given string.
 */
int occ__a(char *s)
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
