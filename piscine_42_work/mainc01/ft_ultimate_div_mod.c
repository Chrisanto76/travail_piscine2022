/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:02:41 by apoure            #+#    #+#             */
/*   Updated: 2022/09/19 16:27:59 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

int	main(void)
{
	int	m;
	int	n;
	int	*a;
	int	*b;

	m = 19;
	n = 5;
	a = &m;
	b = &n;
	ft_ultimate_div_mod(a, b);
	printf("resultat = %d \t modulo = %d/n", *a, *b);
	return (0);
}
