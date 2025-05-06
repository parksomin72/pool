#include "main.h"

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			_putchar('2');
			n = 147483648;
		}
		else
			n *= -1;
	}
	if (n >= 0 && n <= 9)
		_putchar(n + '0');
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}

}

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		print_number(a[i]);
		_putchar('\n');
		i++;
	}

}
