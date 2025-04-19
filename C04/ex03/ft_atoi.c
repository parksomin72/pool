int ft_atoi(char *str)
{
	int sign, result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r'
		|| *str == '\v' || *str == '\f' || *str == '\n')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
