#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')  // percorre a string até o fim
        i++;

    return i;  // retorna o número de caracteres
}

