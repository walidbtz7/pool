/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wboutzou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:17:44 by wboutzou          #+#    #+#             */
/*   Updated: 2021/08/25 14:52:42 by wboutzou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	main(int argc, char **argv )
{
	int	i;

	i = 0;
	argc = 0;
	while (argv[argc][i])
	{
		write(1, &argv[argc][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
