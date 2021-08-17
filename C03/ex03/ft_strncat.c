/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:41:06 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/16 15:43:34 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char	*ft_strcat(char	*dest,	char *src, unsigned	int	n)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while(dest[i] != '\0')
	{
		i++;
	}

	while(src[j] != '\0' && j < n )
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return dest;
}
