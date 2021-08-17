
#include<stdio.h>
int	sizestr(char *str)
{
	int i;
	while(str[i] != '\0')
        {
                i++;
        }
	return i;
}
int find(char *str, char to_find)
{
	 int x;
        int y;
        int a;
        int b;
	  x = 0;
        y = 0;
        a = 0;
        b = 0;
	  while(to_find[x] != '\0')
        {
                if(x == 0)
                {
                        y = b;
                }
                else
                {
                        y = b + 1;
                }
                while(str[y] != '\0')
                {
                        if(to_find[x] == str[y])
                        {
                                if(x == 0)
                                {
                                        a = y;
                                }
                                x++;
                                b = y;
                                y = i;
                        }
                        y++;
                }
        }
}
char	*ft_strstr(char	*str,char	*to_find)
{
	wint i;
	int j;

	i = sizestr(str);
	j = sizestr(to_find);
	
}
