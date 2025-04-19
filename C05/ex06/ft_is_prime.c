int ft_is_prime(int nb)
{
	if (nb ==  2 || nb ==  3)
		return (1);
	if (nb % 2 == 0 || nb <= 1)
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
