/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:17:10 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/22 15:17:13 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print(int	argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tab;

	i = 1;
	j = 0;
	while (i < argc)
	{
		j = 0;
		while (j + i < argc)
		{
			if (ft_strcmp(argv[i], argv[i + j]) > 0)
			{
				tab = argv[i];
				argv[i] = argv[i + j];
				argv[i + j] = tab;
			}
			j++;
		}
		i++;
	}
	print(argc, argv);
	return (0);
}
