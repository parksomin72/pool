#include <unistd.h>

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		int i = 1;

		while (i < ac)
		{
			char *s = av[i];

			while (*s)
			{
				write(1, s, 1);
				s++;
			}
			write(1, "\n", 1);
			i++;
		}
	}

	return (0);
}
