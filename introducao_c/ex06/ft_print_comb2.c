#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	c[5];

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c[0] = a / 10 + '0';
			c[1] = a % 10 + '0';
			c[2] = ' ';
			c[3] = b / 10 + '0';
			c[4] = b % 10 + '0';
			write(1, c, 5);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

