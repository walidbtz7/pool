/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:22:13 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/22 15:22:22 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	main(int	argc, char	**argv)
{
	int	j;

	argc = 1;
	j = 0;
	while (argv[argc] != '\0')
	{
		j = 0;
		while (argv[argc][j] != '\0')
		{
			write(1, &argv[argc][j], 1);
			j++;
		}
		write(1, "\n", 1);
		argc++;
	}
	return (0);
}
