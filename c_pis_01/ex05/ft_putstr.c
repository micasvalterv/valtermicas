#include <unistd.h>  // necessário para write

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0')   // percorre a string até o fim
    {
        write(1, &str[i], 1); // escreve um caractere de cada vez
        i++;
    }
}

