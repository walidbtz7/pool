/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:28:02 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/24 10:28:51 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int	nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*#include<stdlib.h>
#include<stdio.h>
int	main(int c,char **v)
{
	printf("%d",ft_recursive_factorial(atoi(v[1])));
	return 0;
}*/
