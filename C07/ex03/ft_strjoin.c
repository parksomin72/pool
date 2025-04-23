#include <stdlib.h>
int ft_strlen(char **s, int size)
{
	char *start;
	int len, i;

	len = 0;
	i = 0;
	while (i < size)
	{
		start = s[i];
		while (*start)
		{
			len++;
			start++;
		}
		i++;
	}
	return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	if (size < 0)
	{
		return (NULL);
	}

	int total_size, strs_size, sep_size, len;

	len = 0;
	while (sep[len])
		len++;
	strs_size = ft_strlen(strs, size) + 1;
	sep_size = (size - 1) * len;
	total_size = strs_size + sep_size;

	char *s = (char *) malloc(total_size * sizeof(char));

	int i = 0;
	char *start = s;

	while (i < size)
	{
		char *current = strs[i];

		while (*current)
			*start++ = *current++;
		if (i < size - 1)
		{
			char *start_sep = sep;
			while (*start_sep)
				*start++ = *start_sep;
		}
		i++;
	}
	*start = '\0';

	return (s);
}
