#include <unistd.h>

int ft_strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

int is_valid(char *s)
{
	char *ptr, *p;

	ptr = s;
	if (ft_strlen(ptr) < 2)
		return (0);
	while (*ptr)
	{
		p = ptr + 1;
		if (*ptr == '-' || *ptr == '+')
			return (0);
		while (*p)
		{
			if (*p == *ptr)
				return (0);
			p++;
		}

		ptr++;
	}
	return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
	int base_len;
	long n;
	if (!is_valid(base))
		return;
	n = nbr;
	base_len = ft_strlen(base);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	write(1, &(base[n % base_len]), 1);

}
