#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int count;
		char *s = av[1];

		while (*s)
		{
			if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			{
				if (*s >= 'a' && *s <= 'z')
					count = *s - 'a' + 1;
				else if (*s >= 'A' && *s <= 'Z')
					count = *s - 'A' + 1;

				while (count > 0)
				{
					write(1, s, 1);
					count--;
				}
			}
			else
				write(1, s, 1);
			s++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
