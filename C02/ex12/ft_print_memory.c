#include <unistd.h>

void print_hex(char c)
{
	char hex[16] = "0123456789abcdef";
	char pair[2];

	pair[0] = hex[c / 16];
	pair[1] = hex[c % 16];
	write(1, pair, 2);
}

void print_address(unsigned long addr)
{
	char buffer[16], hex[16] = "0123456789abcdef";
	int i;

	i = 15;
	while (i >= 0)
	{
		buffer[i] = hex[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, buffer, 16);
}

void *ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i, y;
	unsigned char *p;

	i = 0;
	p = (unsigned char *) addr;

	while (i < size)
	{
		print_address((unsigned long) (p + i));
		write(1, ": ", 2);

		y = 0;
		while (y < 16)
		{
			if (i + y < size)
				print_hex(p[i + y]);
			else
				write(1, "  ", 2);
			if ((y + 1) % 2 == 0)
				write(1, " ", 1);
			y++;
		}
		y = 0;
		while (y < 16 && i + y < size)
		{
			if(p[y + i] >= 32 && p[y + i] <= 126)
				write(1, &p[y + i], 1);
			else
				write(1, ".", 1);
			y++;
		}
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
