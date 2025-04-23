#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
int ft_strlen_strs(char **str, int size)
{
	int len, i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(str[i]);
		i++;
	}
	return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	if (size <= 0)
	{
		char *empty = malloc(1);
		if (empty)
			*empty = '\0';
		return empty;
	}


	int total_size;

	total_size = ft_strlen_strs(strs, size) + 1 + (size - 1) * ft_strlen(sep);

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
				*start++ = *start_sep++;
		}
		i++;
	}
	*start = '\0';

	return (s);
}
