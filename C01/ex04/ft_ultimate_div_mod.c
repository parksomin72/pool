void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp = *a % *b;
	*a = *a / *b;
	*b = tmp;
}
