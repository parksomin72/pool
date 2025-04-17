#include <unistd.h>

void ft_print_comb(void)
{
	char n, n1, n2;

	n = '0';
	while(n <= '7')
	{
		n1 = n + 1;
		while (n1 <= '8')
		{
			n2 = n1 + 1;
			while (n2 <= '9')
			{
				write(1, &n, 1);
				write(1, &n1, 1);
				write(1, &n2, 1);
				if (n != '7' || n1 != '8' || n2 != '9')
					write(1, ", ", 2);
				n2++;
			}
			n1++;
		}
		n++;
	}
}
