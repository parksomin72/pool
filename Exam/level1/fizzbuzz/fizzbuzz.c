#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_number(int nb)
{
	if (nb >= 1 && nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		print_number(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			print_number(i);
			ft_putchar('\n');
		}
		i++;
	}

	return (0);
}
