#include "main.h"

int main(void)
{
	char n, n1, n2;

	n = '0';
	while (n <= '7')
	{
		n1 = n + 1;
		while (n1 <= '8')
		{
			n2 = n1 + 1;
			while (n2 <= '9')
			{
				_putchar(n);
				_putchar(n1);
				_putchar(n2);
				if (n != '7' || n1 != '8' || n2 != '9')
				{
					_putchar(',');
					_putchar(' ');
				}
				n2++;
			}
			n1++;
		}
		n++;
	}
	_putchar('\n');
	return (0);
}
