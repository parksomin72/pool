char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src)
		*tmp++ = *src++;
	*tmp = '\0';
	return (dest);
}
