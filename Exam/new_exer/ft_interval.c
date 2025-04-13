#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	int i = 1;
	char *s = av[1];

	while (*s)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "5", 1);
		else if (i % 3 == 0)
			write(1, "5", 1);
		else if (i % 5 == 0)
			write(1, "3", 1);
		else
			write(1, s, 1);
		i++;
		s++;
	}
	write(1, "\n", 1);

	return (0);
}
