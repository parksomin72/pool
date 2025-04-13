char *ft_lowercase(char *s)
{
	char *start = s;

	while (*start)
	{
		if (*start >= 'A' && *start <= 'Z')
			*start += 32;
		start++;
	}
	return (s);
}

char *ft_capitalize(char *s)
{
	int new_word = 0;
	char *str = s;

	ft_lowercase(s);

	if (*s >= 'a' && *s <= 'z')
	{
		*s -= 32;
		s++;
	}

	while (*s)
	{
		if ((*s == ' ' || *s == '\t') && (*(s + 1) >= 'a' && *(s + 1) <= 'z'))
			*(s + 1) -= 32;
		s++;
	}
	return (str);
}

/* testing code*/
#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *s = av[1];

		ft_capitalize(s);
		while (*s)
		{
			write(1, s, 1);
			s++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
