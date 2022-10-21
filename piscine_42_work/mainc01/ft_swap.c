/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:15:54 by apoure            #+#    #+#             */
/*   Updated: 2022/09/19 13:37:14 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int 	x;
	int	*a;
i
	int	y;
	int	*b;

	x = 3;
	y = 4;
	a = &x;
	b = &y;
	ft_swap(a, b);i
	printf("a=%d \t b=%d\n", *a, *b);
	return (0);
}i
