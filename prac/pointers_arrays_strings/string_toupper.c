char *string_toupper(char *str)
{
	char *tmp = str;

	while (*tmp)
	{
		if (*tmp >= 'a' && *tmp <= 'z')
			*tmp -= 32;
		tmp++;
	}

	return (str);
}
