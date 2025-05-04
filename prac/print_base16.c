#include "main.h"

int main()
{
	char c, n;

	c = 'a';
	n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	while (c <= 'f')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
