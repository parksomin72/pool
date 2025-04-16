char	*ft_strpbrk(const char *s1, const char *s2)
{
	const char *tmp;
	int i;

	tmp = s1;
	while (*tmp)
	{
		i = 0;
		while (s2[i])
		{
			if (*tmp == s2[i])
				return ((char *) tmp);
			i++;
		}
		tmp++;
	}
	return (NULL);
}
