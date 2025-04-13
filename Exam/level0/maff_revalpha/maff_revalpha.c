#include <unistd.h>

int main()
{
	char alpha, ch;

	alpha = 'z';

	while (alpha >= 'a')
	{
		if (alpha % 2 == 0)
			ch = alpha - 32;
		else
			ch = alpha;
		write(1, &ch, 1);
		alpha--;
	}
	write (1, "\n", 1);

	return (0);
}
