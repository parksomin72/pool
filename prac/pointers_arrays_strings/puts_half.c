#include "main.h"

void puts_half(char *str)
{
	int n, length_of_the_string;

	length_of_the_string = 0;
	while (str[length_of_the_string])
		length_of_the_string++;
	if (length_of_the_string % 2 != 0)
		n = (length_of_the_string - 1) / 2 + 1;
	else
		n = length_of_the_string / 2;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
