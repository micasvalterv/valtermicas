#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int x = 10, y = 3;
    ft_ultimate_div_mod(&x, &y);
    printf("x=%d, y=%d\n", x, y); // x=3, y=1
    return 0;
}
