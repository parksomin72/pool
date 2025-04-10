#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int idx;
		char *s;
		
		s = av[1];
		idx = 1;
		while (*s)
		{
			if (idx % 3 == 0 && idx % 5 == 0)
				write(1, "5", 1);
			else if (idx % 3 == 0)
				write(1, "5", 1);
			else if (idx % 5 == 0)
				write(1, "3", 1);
			else
				write(1, s, 1);
			s++;
			idx++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
