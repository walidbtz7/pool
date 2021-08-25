#include<stdlib.h>
int	*ft_strdup(int	*src)
{
	int  *p;
	int i;
	int j;

	i = 0;
	j = 0;
		while (src[i] != '\0')
		{
			i++;
		}
	p = (int *) malloc (i * sizeof(int));
	while (src[j] != '\0')
	{	
		p[j] = src[j];
		j++;
	}
	return (p);
}
