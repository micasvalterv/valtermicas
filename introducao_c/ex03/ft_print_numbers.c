#include <unistd.h>

void ft_print_numbers(void)
{
	char v;
	v='0';
	while (v<='9')
	{
		write(1, &v, 1);
		v++;
	}


}
