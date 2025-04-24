#include <unistd.h>

void ft_generate_comb(int tab[], int start, int end, int index)
{
    int i = start;
    while (i <= 10 - (end - index))
    {
        tab[index] = i; 
        if (index == end - 1)
        {
            int j = 0;
            while (j < end)
            {
                char c = tab[j] + '0';
                write(1, &c, 1);
                j++;
            }
            if (tab[0] != 10 - end)
                write(1, ", ", 2);
        }
        else
            ft_generate_comb(tab, i + 1, end, index + 1);
        i++;
    }
}

void ft_print_combn(int n)
{
    if (n <= 0 || n >= 10)
        return;

    int T[10];
    ft_generate_comb(T, 0, n, 0);
}
