#include "main.h"

int main()
{
	char Lower, Upper;
	
	Lower = 'a';
	Upper = 'A';

	while (Lower <= 'z')
	{
		_putchar(Lower);
		Lower++;
	}
	while (Upper <= 'Z')
	{
		_putchar(Upper);
		Upper++;
	}
	_putchar('\n');

	return (0);
}
