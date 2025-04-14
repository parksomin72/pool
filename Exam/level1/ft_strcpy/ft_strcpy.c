char    *ft_strcpy(char *s1, char *s2)
{
	char *start = s1;

	while (*s2)
	{
		*start = *s2;
		start++;
		s2++;
	}
	*start = '\0';

	return (s1);
}
