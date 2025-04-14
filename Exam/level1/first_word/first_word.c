#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *s = av[1];

		while (*s == ' ' || *s == '\t')
			s++;
		while (*s)
		{
			if (*s == ' ' || *s == '\t')
				break;
			write(1, s, 1);
			s++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
