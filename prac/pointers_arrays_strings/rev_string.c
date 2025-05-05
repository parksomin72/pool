void rev_string(char *s)
{
	char *end, *start, tmp;

	start = s;
	end = s;

	while (*end)
		end++;
	end--;

	while (end > start)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
