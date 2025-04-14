#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;

		while (av[1][i])
			i++;
		char *s = &av[1][--i];

		while (i >= 0)
		{
			write(1, s, 1);
			s--;
			i--;
		}
	}
	write(1,  "\n", 1);

	return (0);
}
