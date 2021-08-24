/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:38:21 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/24 10:40:14 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb % 2 == 0)
	{
		return (0);
	}
	else
	{
		while (i < (nb / 2))
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}
/*include<stdio.h>
#include<stdlib.h>
int main(int	c,char	**v)
{
	printf("%d",ft_is_prime(atoi(v[1])));
	return (0);
}*/
