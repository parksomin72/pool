#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *s = av[1];

		while (*s)
		{
			if (*s >= 'a' && *s <= 'z')
				*s -= 32;
			else if (*s >= 'A' && *s <= 'Z')
				*s += 32;
			write(1, s, 1);
			s++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
