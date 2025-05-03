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

	if (ft_strlen(s) < 2 || !s)
		return (0);
	ptr = s;
	while (*ptr)
	{
		if (*ptr == '-' || *ptr == '+' || *ptr == ' ')
			return (0);
		p = ptr + 1;
		while (*p)
		{
			if (*ptr == *p)
				return (0);
			p++;
		}
		ptr++;
	}
	return (1);
}

int index_in_base(char c, char *base)
{
	int i = 0;

	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int ft_atoi_base(char *str, char *base)
{
	if (!is_valid(base))
		return (0);
	int sign, result, i, base_len, index;

	i = 0;
	sign = 1;
	result = 0;
	base_len = ft_strlen(base);

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
	|| str[i] == '\v' || str [i] == '\n' || str[i] == '\f')
		i++;

	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}


	while ((index = index_in_base(str[i], base)) != -1)
	{
		result = result * base_len + index;
		i++;
	}

	return (result * sign);
}
