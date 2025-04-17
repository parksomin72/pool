#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int n, n1;

	n = 0;

	while (n <= 98)
	{
		n1 = n + 1;
		while (n1 <= 99)
		{
			ft_putchar(n / 10 + '0');
			ft_putchar(n % 10 + '0');
			ft_putchar(' ');
			ft_putchar(n1 / 10 + '0');
			ft_putchar(n1 % 10 + '0');
			if (n != 98 || n1 != 99)
				write(1, ", ", 2);
			n1++;
		}
		n++;
	}
}
