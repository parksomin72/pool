#include <unistd.h>

void ft_print_numbers(void)
{
	char N = '0';

	while (N <= '9')
	{
		write(1, &N, 1);
		N++;
	}
}
