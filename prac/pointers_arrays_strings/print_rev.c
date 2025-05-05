#include "main.h"

void print_rev(char *s)
{
	char *tmp = s;

	while (*tmp)
		tmp++;
	tmp--;
	while (tmp >= s)
	{
		_putchar(*tmp);
		tmp--;
	}
	_putchar('\n');
}
