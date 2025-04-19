unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len, len_src;

	len_src = 0;
	while (src[len_src])
		len_src++;
	if (size <= 0)
		return (len_src);
	len = 0;
	while (len < (size - 1) && *src)
	{
		dest[len] = *src;
		len++;
		src++;
	}
	dest[len] = '\0';

	return (len_src);
}
