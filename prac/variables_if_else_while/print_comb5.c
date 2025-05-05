#include "main.h"

int main(void)
{
	int n, n1;

	n = 0;

	while (n <= 98)
	{
		n1 = n + 1;
		while (n1 <= 99)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(' ');
			_putchar(n1 / 10 + '0');
			_putchar(n1 % 10 + '0');
			if (n != 98 || n1 != 99)
			{
				_putchar(',');
				_putchar(' ');
			}
			n1++;
		}
		n++;
	}
	_putchar('\n');
	return (0);
}
