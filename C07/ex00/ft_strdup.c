#include <stdlib.h>


char *ft_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src)
	{
		*s++ = *src++;
	}
	*s = '\0';

	return (dest);
}

char *ft_strdup(char *src)
{
	int len = 0;

	while (src[len])
		len++;

	char *str = (char *) malloc((len + 1) * sizeof(char));

	return (ft_strcpy(str, src));
}
