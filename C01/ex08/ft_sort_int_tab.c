void ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void ft_sort_int_tab(int *tab, int size)
{
	int i, y, index;

	i = 0;
	while (i < size - 1)
	{
		index = i;
		y = i + 1;

		while (y < size)
		{
			if (tab[index] > tab[y])
				index = y;
			y++;
		}
		if (index != i)
		ft_swap(&tab[index], &tab[i]);
		i++;
	}
}
