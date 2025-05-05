#include "main.h"

int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		if (n != '9')
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
	return (0);
}
