int ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);

	int result = 1;

	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
