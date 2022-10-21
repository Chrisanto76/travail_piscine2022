/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoure <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:12:27 by apoure            #+#    #+#             */
/*   Updated: 2022/09/29 13:54:56 by apoure           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
	if (to_find[count2] == '\0')
		return (str);
	while (str[count1])
	{
		while (str[count1 + count2] == to_find[count2]
			&& str[count1 + count2] != '\0')
		{
			count2++;
		}
		if (to_find[count2] == '\0')
			return (str + count1);
		count1++;
		count2 = 0;
	}
	return (0);
}

/*int	main(void)
{
	char	dest[] = "salut j'ai une oreille dans le dos";
	char	src[] = "une";
	char	*result;

	result = ft_strstr(dest, src);
	printf("donc : %s\n", (result));
	return (0);
}*/
