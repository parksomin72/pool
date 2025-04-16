#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int len, i;

	len = 0;
	while (src[len])
		len++;

	char *dest = (char *) malloc((len + 1) * sizeof(char));

	i = 0;
	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
