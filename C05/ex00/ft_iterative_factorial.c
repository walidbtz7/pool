/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:23:04 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/24 10:26:31 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_interative_factorial(int	nb)
{
	int	i;
	int	total;

	i = nb;
	total = 1;
	if (nb == 0)
	{
		total = 1;
		return (total);
	}
	else if (nb > 0)
	{
		while (i > 1)
		{
			total = total * i;
			i--;
		}
		return (total);
	}
	else
		return (0);
}
/*#include<stdlib.h>
#include<stdio.h>
int	main(int c,char **v)
{
	printf("%d",ft_interative_factorial(atoi(v[1])));
	return 0;
}*/
