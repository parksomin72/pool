#include "main.h"

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		_putchar(c);
		c--;
	}
	_putchar('\n');

	return (0);
}
