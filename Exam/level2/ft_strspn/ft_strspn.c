size_t  ft_strspn(const char *s, const char *accept)
{
	const char *tmp, *str;
	int found;

	tmp = s;
	while (*tmp)
	{
		str = accept;
		found = 0;
		while (*str)
		{
			if (*tmp == *str)
			{
				found = 1;
				break;
			}
			str++;
		}
		if (!found)
			break;;
		tmp++;
	}
	return (tmp - s);
}
