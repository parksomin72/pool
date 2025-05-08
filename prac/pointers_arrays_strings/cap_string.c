char *_tolower(char *str)
{
	char *tmp = str;

	while (*tmp)
	{
		if (*tmp >= 'A' && *tmp <= 'Z')
			*tmp += 32;
		tmp++;
	}
	return (str);
}

int is_alpha(char c)
{
	return (c >= 'a' && c <= 'z');
}

int is_separator(char c)
{
	return (c == ',' || c == ';' || c == '.' || c == '!' || c == '?'
		|| c == '"' || c == '(' || c == ')' || c == '{' || c == '}'
		|| c == ' ' || c == '\t' || c == '\r' || c == '\v'
		|| c == '\f' || c == '\n');
}

char *cap_string(char *str)
{
	char *tmp = str;

	_tolower(tmp);
	if (is_alpha(*tmp))
	{
		*tmp -= 32;
		tmp++;
	}
	while (*tmp)
	{
		if (is_separator(*(tmp - 1)) && is_alpha(*tmp))
			*tmp -= 32;
		tmp++;
	}

	return (str);
}
