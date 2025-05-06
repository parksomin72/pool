int _atoi(char *s)
{
	int result, sign;

	sign = 1;
	result = 0;

	while (!(*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
