#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int arr[] = {5, 2, 9, 1, 3};
    int size = 5;
    int i;

    ft_sort_int_tab(arr, size);

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

