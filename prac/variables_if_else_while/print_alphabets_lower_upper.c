#include "main.h"

int main(void)
{
	char lower, upper;
	
	lower = 'a';
	upper = 'A';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		_putchar(upper);
		upper++;
	}
	_putchar('\n');

	return (0);
}
