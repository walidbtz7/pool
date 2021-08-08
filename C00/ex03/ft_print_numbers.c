#include<unistd.h>
void	ft_print_numbers(void)
{
	char	i;

	i = '1';
	while (i <= '8')
	{
		write(1, &i, 1);
		i++;
	}
}
