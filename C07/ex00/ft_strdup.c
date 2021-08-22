#include<stdlib.h>
#include<stdio.h>
int	*ft_strdup(int	*src)
{
	int  *p;
	int i = 0;
	int j = 0;
	while(src[i] != '\0')
	{
		i++;
	}
	p = (int *) malloc ((i + 1)*sizeof(int));
	while(src[j] != '\0')
	{	
		p[j] = src[j];
		j++;
	}
	return p;
}
int main()
{
	int src[] = {4,8,4,5,6,4};	
	int *p  = ft_strdup(src);
	printf("%d",p[i]);
	return 0;
}
