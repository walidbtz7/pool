/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:32:48 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/24 10:34:38 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int	nb, int	power)
{
	int	total;
	int	i;

	total = 1;
	i = power;
	if (i == 0)
		return (1);
	if (i < 0)
		return (0);
	if (i > 0)
	{
		total = nb * ft_recursive_power(nb, i - 1);
	}
	return (total);
}
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("%d",ft_recursive_power(4,4));
}*/
