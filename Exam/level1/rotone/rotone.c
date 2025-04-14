#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *s = av[1];

		while (*s)
		{
			if ((*s >= 'a' && *s < 'z') || (*s >= 'A' && *s < 'Z'))
				*s += 1;
			else if (*s == 'z' || *s == 'Z')
				*s -= 25;
			write(1, s, 1);
			s++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
