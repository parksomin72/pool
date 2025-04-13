int ft_strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = ft_strlen(*s);

	while (i < len / 2)
	{
		if (s[i] != s[len - 1 - i])
			return (0);
		i++;
	}
	return (1);
}
