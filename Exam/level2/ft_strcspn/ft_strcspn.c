size_t	ft_strcspn(const char *s, const char *reject)
{
	const char *tmp = s;
	size_t count = 0;

	while (*tmp)
	{
		const char *start = reject;

		while (*start)
		{
			if (*tmp == *reject)
				return (count);
			start++;
		}
		count++;
		tmp++;
	}
	return (count);
}
