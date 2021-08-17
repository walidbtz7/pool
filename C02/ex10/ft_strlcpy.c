/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:02:53 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/17 11:13:22 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < i - 1 )
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i);
}
