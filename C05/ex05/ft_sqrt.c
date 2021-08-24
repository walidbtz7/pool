/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:37:30 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/24 10:37:53 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int	ab)
{	
	int	i;

	i = 0;
	if (ab <= 0)
	{
		return (0);
	}
	else
	{
		while (ab != i * i)
		{
			i++;
		}
	}
	return (i);
}
/*
#include<stdio.h>
#include<stdlib.h>
int main(int c,char **v)
{
	printf("%d",ft_sqrt(atoi(v[1])));
	return 0;
}*/
