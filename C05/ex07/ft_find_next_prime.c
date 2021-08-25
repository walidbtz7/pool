/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:42:07 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/25 17:14:35 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb % 2 == 0)
	{
		return (0);
	}
	else
	{
		while (i < (nb / i))
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int	nb)
{
	int	i;

	i = nb;
	if (i <= 2)
	{
		return (2);
	}
	else
	{
		while (!ft_is_prime(i))
			i++;
	}
	return (i);
}
