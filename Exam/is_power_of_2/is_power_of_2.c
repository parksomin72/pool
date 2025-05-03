#include <stdio.h>
int	    is_power_of_2(unsigned int n);

int main()
{
	if (is_power_of_2(8) == 1)
		printf("This number is a power of 2\n");
	else
		printf("This number isn't a power of 2\n");
}

int	    is_power_of_2(unsigned int n)
{
	unsigned int nbr;

	nbr = 1;
	while (nbr < n && nbr < 2147483648)
		nbr *= 2;

	return (nbr == n);
}
