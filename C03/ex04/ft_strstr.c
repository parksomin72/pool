char *ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);

	char *s, *start, *tmp;

	s = str;

	while (*s)
	{
		tmp = s;
		start = to_find;

		while (*start && *tmp && *start == *tmp)
		{
			tmp++;
			start++;
		}

		if (*start == '\0')
			return (s);
		s++;
	}

	return (NULL);
}
