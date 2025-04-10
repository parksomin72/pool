/*
 // test function
#include <stdio.h>
int ft_occ_a(char *str);
int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *s = av[1];
		int count = ft_occ_a(s);
		printf("the occu of char A is: %d", count);
	}
	printf("\n");
	return (0);
}
*/
int ft_occ_a(char *str)
{
	int count = 0;

	while (*str)
	{
		if (*str == 'A')
			count++;
		str++;
	}

	return (count);
}
