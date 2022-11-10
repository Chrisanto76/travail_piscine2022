/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:42:47 by apoure            #+#    #+#             */
/*   Updated: 2022/10/05 11:27:41 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	put_sign;

	result = 0;
	put_sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			put_sign *= -1;
		str++;
	}	
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * put_sign);
}

#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	one;
	int	two;

	if (argc == 2)
	{
		one = ft_atoi(argv[1]);
		two = atoi(argv[1]);
		printf("one : %d \t two : %d\n", one, two);
	}
	return (0);
}

