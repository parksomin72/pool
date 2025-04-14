#include <unistd.h>

int main(int ac, char **av)
{
	if  (ac == 2)
	{
		char *s = av[1];

		while (*s)
		{
			if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
				*s += 13;
			else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
				*s -= 13;
			write(1, s, 1);
			s++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
