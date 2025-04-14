#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
	{
		char *s = av[1];

		while (*s)
		{
			if (*s == av[2][0])
				*s = av[3][0];
			write(1, s, 1);
			s++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
