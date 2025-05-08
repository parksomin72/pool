char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*tmp)
		tmp++;
	while (*src)
	{
		*tmp++ = *src++;
	}
	*tmp = '\0';
	return (dest);
}
