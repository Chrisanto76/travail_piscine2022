/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:52:26 by apoure            #+#    #+#             */
/*   Updated: 2022/09/22 16:27:01 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	test[] = "12346789";

	printf("%d", ft_str_is_numeric(test));
}
