#include <unistd.h>

int is_already_print(char c, char *str, int index)
{
	int i =0;

	while (i < index)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int is_found(char c, char *s1)
{
	char *ptr = s1;
	while (*ptr)
	{
		if (c == *ptr)
			return (1);
		ptr++;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;

		while (av[1][i])
		{
			if (!is_already_print(av[1][i], av[1], i) && is_found(av[1][i], av[2]))
				write(1, &av[1][i], 1);
			i++;
		}
	}

	write(1, "\n", 1);

	return (0);
}
