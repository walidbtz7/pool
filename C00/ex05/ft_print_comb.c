#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	condition(char a, char b, char c)
{
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				condition(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}	
}
