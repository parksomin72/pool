char *ft_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src)
	{
		*s++ = *src++;
	}
	*s = '\0';

	return (dest);
}
