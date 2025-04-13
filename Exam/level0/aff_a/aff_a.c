#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *s = av[1];

		while (*s)
		{
			if (*s == 'a')
			{
				write(1, "a", 1);
				break;
			}
			s++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
