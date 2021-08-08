#include<unistd.h>
void putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_c(char a, char b, char c, char d){
	while	(d <= '9')
	{
		putchar(a);
		putchar(b);
		write(1, " ", 1);
		putchar(c);
		putchar(d);
	     if( a != '9' && b != '8' && c != '9' && d != '9') 
		 write(1, ", ", 2);

			   
		d++;
	}
}

void	ft_comb(char a, char b, char c ,char d)
{
	while	(a <= '9')
	{
		while(b <= '8')
		{
	 		while(c <= '9')
	 		{
			    ft_print_c(a, b, c, d);
				d = '2';
				c++;
				if( c > '9')
				{
					b++;
				}
			}
		c = '0';
		if( b > '8')
		{
			a++;
		}
	}
	b = '0';
  }
}
void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	ft_comb(a,  b,  c , d);
}
int main()
{
	ft_print_comb2();
}
