char *ft_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*s)
		s++;
	while (*src)
		*s++ = *src++;
	*s = '\0';

	return (dest);
}
