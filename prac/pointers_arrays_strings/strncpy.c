char *_strncpy(char *dest, char *src, int n)
{
	char *tmp;
	int i;

	if (n <= 0)
		return (dest);

	tmp = dest;
	i = 0;

	while (i < n && *src)
	{
		*tmp++ = *src++;
		i++;
	}
	while (i < n)
	{
		*tmp++ = '\0';
		i++;
	}
	return (dest);

}
