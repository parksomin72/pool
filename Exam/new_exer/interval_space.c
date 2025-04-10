#include <unistd.h>

int main(int ac, char ** av)
{
	if (ac == 2)
	{
		char *s = av[1];

		while (*s)
		{
			write(1, s, 1);
			if (*(s + 1) != '\0')
				write(1, "   ", 3);
			s++;
		}
	}

	write(1, "\n", 1);

	return (0);
}
