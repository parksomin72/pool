#include <unistd.h>

int ft_strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

int is_palandrom(char *s)
{
	int len = ft_strlen(s);
	int i = 0;

	while (i < len / 2)
	{
		if (s[i] != s[len - 1 - i])
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char**av)
{
	if (ac == 2)
	{
		char *s = av[1];

		if (is_palandrom(s) == 1)
			write(1, s, ft_strlen(s));
	}
	write(1, "\n", 1);
	return (0);
}
