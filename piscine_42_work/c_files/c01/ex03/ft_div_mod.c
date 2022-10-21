/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:57:39 by apoure            #+#    #+#             */
/*   Updated: 2022/09/20 12:04:08 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 50;
	b = 3;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf(" resultat div = %d \t modulo = %d\n", *div, *mod);
	return (0);
}*/
