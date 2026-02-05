#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
    int x = 5;
    int y = 10;
    ft_swap(&x, &y);
    printf("x=%d, y=%d\n", x, y); // x=10, y=5
    return 0;
}
