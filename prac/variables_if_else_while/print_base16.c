#include "main.h"

int main(void)
{
	char chara, nbr;

	chara = 'a';
	nbr = '0';

	while (nbr <= '9')
	{
		_putchar(nbr);
		nbr++;
	}
	while (chara <= 'f')
	{
		_putchar(chara);
		chara++;
	}
	_putchar('\n');
	return (0);
}
