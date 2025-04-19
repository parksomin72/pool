char *ft_strlowcase(char *str)
{
	char *s = str;

	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s += 32;
		s++;
	}

	return (str);
}
