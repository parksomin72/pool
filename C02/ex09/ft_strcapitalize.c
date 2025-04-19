char *ft_strlowercase(char *str)
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

char *ft_strcapitalize(char *str)
{
	char *s = str;

	ft_strlowercase(s);

	if (*s >= 'a' && *s <= 'z')
		*s++ -= 32;
	while (*s)
	{
		if (((*s == ' ' || *s == '\t' || *s == ',' || *s == ';'
		|| *s == ':' || *s == '!' || *s == '?' || *s == '-' || *s == '+')
		&& (*(s + 1) >= 'a' && *(s + 1) <= 'z')))
		{
			*(s + 1) -= 32;
		}
		s++;
	}
	return (str);
}
