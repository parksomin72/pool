char *leet(char *str)
{
	char s1[10] = "aAeEoOtTlL";
	char s2[10] = "4433007711";
	char *tmp = str;
	int i = 0;

	while (*tmp)
	{
		i = 0;
		while (s1[i])
		{
			if (*tmp == s1[i])
			{
				*tmp = s2[i];
				break;
			}
			i++;
		}
		tmp++;
	}

	return (str);
}
