#include "main.h"

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
