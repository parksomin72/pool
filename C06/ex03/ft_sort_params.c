#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void ft_sort(int ac, char **av)
{
	int i, y, index;
	char *tmp;

	i = 1;
	while (i < ac - 1)
	{
		index = i;
		y = i + 1;
		while (y < ac)
		{
			if (ft_strcmp(av[index], av[y]) > 0)
				index = y;
			y++;
		}
		if (index != i)
		{
			tmp = av[i];
			av[i] = av[index];
			av[index] = tmp;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		ft_sort(ac, av);

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
}
