/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 01:39:17 by amuller           #+#    #+#             */
/*   Updated: 2022/09/24 19:19:32 by amuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int ac, char **av)
{
	int	size;
	int	*args;

	if (ac == 2)
	{
		size = ft_number_count(av[1]);
		if (size < 0)
			return (ft_puterror(1));
		if (size % 4 == 0 && size >= 4)
		{
			size /= 4;
			args = ft_get_args(size, av[1]);
			if (ft_program_manager(size, args))
				return (0);
		}
		else
			ft_puterror(1);
	}
	else
		ft_puterror(1);
	return (0);
}
