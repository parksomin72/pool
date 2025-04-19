char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i = 0;
	char *s = dest;

	while (*s)
		s++;
	while (i < nb && *src)
	{
		*s++ = *src++;
		i++;
	}
	*s = '\0';

	return (dest);

}
