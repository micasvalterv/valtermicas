#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *s = "Olá, 42!";
    int len = ft_strlen(s);

    printf("%d\n", len);  // Deve imprimir 8
    return 0;
}

