#include <unistd.h>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		char *s = av[ac - 1];

		while (*s)
		{
			write(1, s, 1);
			s++;
		}
	}
	write(1, "\n", 1);
}
