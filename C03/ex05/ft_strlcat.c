unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_src, len_dest, i;

	len_src = 0;
	len_dest = 0;
	while (src[len_src])
		len_src++;

	while(dest[len_dest])
		len_dest++;
	if (size <= len_dest)
		return (size + len_src);

	i = 0;
	while ((len_dest + i + 1) < size && src[i])
	{
		dest[len_dest + i] = src [i];
		i++;
	}
	dest[len_dest + i] = '\0';

	return (len_src + len_dest);
}
