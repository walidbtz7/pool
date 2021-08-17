/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:58:10 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/17 11:02:01 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (!(str[i - 1] >= '0' && str[i - 1] <= '9')
				&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
				&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
