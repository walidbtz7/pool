/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:30:32 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/24 10:32:27 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int	nb, int	power)
{
	int	i;
	int	total;

	i = 0;
	total = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (i < power)
		{
			total *= nb;
			i++;
		}
		return (total);
	}
}
/*#include<stdio.h>
#include<stdlib.h>
int main(int	c,char	**v)
{
	printf("%d",ft_iterative_power(atoi(v[1]),atoi(v[2])));
	return 0;
}*/
