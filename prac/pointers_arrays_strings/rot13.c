char *rot13(char *str)
{
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *tmp = str;
	int i;

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
