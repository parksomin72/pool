int ft_is_prime(int nb)
{
	if (nb % 2 == 0)
		return (0);
	int i = 3;

	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb == 3)
		return (3);

        int i, is_prime;

        i = nb;
	is_prime = 0;
        while (!is_prime)
        {
                is_prime = ft_is_prime(i);
		if (is_prime)
			break;
                i++;
        }
        return (i);
}
