#include <stdlib.h>

int *ft_range(int min, int max)
{
	if (min >= max)
		return (0);

	int size = max -min;
	int *range = (int *) malloc(size * sizeof(int));
	int i = 0;

	while (i < size)
	{
		range[i] = i + min;
		i++;
	}
	return (range);
}
