char *_strncat(char *dest, char *src, int n)
{
	char *tmp;
	int i;

	if (n <= 0)
		return (dest);

	tmp = dest;
	while (*tmp)
		tmp++;
	i = 0;
	while (i < n && *src)
	{
		*tmp++ = *src++;
		i++;
	}
	*tmp = '\0';

	return (dest);
}
