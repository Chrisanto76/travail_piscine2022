/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:04:38 by apoure            #+#    #+#             */
/*   Updated: 2022/10/03 15:25:41 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putc(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	letter;
	int	word;

	word = 1;
	while (word < argc)
	{
		letter = 0;
		while (argv[word][letter] != '\0')
		{
			ft_putc(argv[word][letter]);
			letter++;
		}
		word++;
		ft_putc('\n');
	}
	return (0);
}
