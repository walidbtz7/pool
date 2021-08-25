#include<stdlib.h>
int	*ft_range(int min, int	max)
{
	int	*p;
	int	i;
	int	size;

	if(min <= max)
	{	
	i = 0;
	size = max - min + 1;
	p = (int *) malloc (size *  sizeof(int));
	while(i < size)
	{
		p[i] = min;
		min++;
		i++;
	}
	return	(p);
	}
	return (0);
}
#include<stdio.h>
int main(int c,char	**v)
{
	int i;
	int size;

	size = atoi(v[2]) - atoi(v[1]) + 1;
	int *p = ft_range(atoi(v[1]),atoi(v[2]));
	i = 0;
	while(i < size)
	{
		printf("%d",p[i]);
		i++;
	}
	return 0;
}
