#include <stdio.h>
void ft_ultimate_ft(int *********nbr);
int main(void)
{
    int n;
    int *p = &n;
    int **pp = &p;
    int ***ppp = &pp;
    int ****pppp = &ppp;
    int *****ppppp = &pppp;
    int ******pppppp = &ppppp;
    int *******ppppppp = &pppppp;
    int ********pppppppp = &ppppppp;

    ft_ultimate_ft(&pppppppp); // o 9º nível
    printf("%d\n", n); // 42
    return 0;
}
