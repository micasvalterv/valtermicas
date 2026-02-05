#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int tab[] = {1,2,3,4,5};
    int size = 5;
    ft_rev_int_tab(tab, size);
    for (int i=0; i<size; i++)
        printf("%d ", tab[i]); // 5 4 3 2 1
    printf("\n");
    return 0;
}
