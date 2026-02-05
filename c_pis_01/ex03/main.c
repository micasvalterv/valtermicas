#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a = 5;
	int b = 3;
	int div, mod;
	ft_div_mod(a, b, &div, &mod);
	printf("div=%d, mod=%d\n", div, mod);
	return 0;
}

