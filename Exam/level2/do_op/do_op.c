#include "do_op.h"

void do_op(int num1, char s, int num2)
{
	if (s == '+')
		printf("%d", num1 + num2);
	else if (s == '-')
		printf("%d", num1 - num2);
	else if (s == '*')
		printf("%d", num1 * num2);
	else if (s == '/' && num2 != 0)
		printf("%d", num1 / num2);
	else if (s == '%' && num2 != 0)
		printf("%d", num1 % num2);;

}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int num1, num2;

		num1 = atoi(av[1]);
		num2 = atoi(av[3]);

		do_op(num1, av[2][0], num2);
	}
	printf("\n");

	return (0);
}
