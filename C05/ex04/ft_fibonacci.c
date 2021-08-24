/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:35:54 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/24 10:36:08 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int	index)
{
	int	x;

	x = 0;
	if (index == 1)
	{
		x = 1;
	}
	if (index == 0)
	{
		x = 0;
	}
	if (index < 0)
	{
		return (-1);
	}
	if (index >= 2)
	{
		x = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (x);
}
/*#include<stdio.h>
#include<stdlib.h>
int main(int	c, char	**v)
{
	printf("%d",ft_fibonacci(atoi(v[1])));
	return	0;
}*/
