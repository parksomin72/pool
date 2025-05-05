#include "main.h"

int main(void)
{
	char n, n1;

	n = '0';

	while (n <= '8')
	{
		n1 = n + 1;
		while (n1 <= '9')
		{
			_putchar(n);
			_putchar(n1);
			if (n != '8' || n1 != '9')
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
