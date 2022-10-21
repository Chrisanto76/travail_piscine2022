/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:07:25 by apoure            #+#    #+#             */
/*   Updated: 2022/09/22 13:37:28 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n )
	{
		dest[i] = src[i];
		i++;
	}
	
	while (dest[i] < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';	
	return (dest);
}

int	main(void)
{
	char	dest[] = "abc";
	char	src[] = "12hgvhgv34567";
	unsigned int	size;
	char	*a;
	int	b;

	size = 9;
	a = ft_strncpy(dest, src, size);
	printf("%s\n", a);
	b = ft_strlen(a);
	printf("%d", b);
	
	return (0);
}
