/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <wboutzou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:14:42 by wboutzou          #+#    #+#             */
/*   Updated: 2022/04/21 13:31:38 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	if (size <= j)
		total = size + i;
	else
	{
		total = j + i;
		i = 0;
		while (src[i] != '\0' && j < size - 1 )
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	return (total);
}
