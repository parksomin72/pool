#include "main.h"

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n / 10 != 0)
			print_number(-(n / 10));
		 _putchar('0' - n % 10);
	}
	else if (n >= 0 && n <= 9)
		_putchar(n + '0');
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
