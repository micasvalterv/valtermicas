#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)       // passa por cada elemento
    {
        for (j = 0; j < size - i - 1; j++) // compara pares consecutivos
        {
            if (tab[j] > tab[j + 1])    // se estiver fora de ordem
            {
                temp = tab[j];          // troca
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

