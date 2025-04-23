#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	int size = max - min;
	*range = (int *) malloc(size * sizeof(int));

	if (!range)
		return (-1);

	int i = 0;
	
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);

}
