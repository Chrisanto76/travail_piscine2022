/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 01:37:40 by amuller           #+#    #+#             */
/*   Updated: 2022/09/24 20:02:25 by amuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print_board(int **board)
{
	int	i;
	int	j;
	int	size;

	size = board[0][0];
	i = 1;
	while (i < size + 1)
	{
		j = 1;
		while (j < size + 1)
		{
			ft_putchar(board[i][j] + '0');
			j++;
			if (j == size + 1)
				ft_putchar('\n');
			else
				ft_putchar(' ');
		}
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' || str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	if (sign % 2 == 1)
		nb *= -1;
	return (nb);
}

int	*ft_alloc_tab(int len, char **av)
{
	int	*tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int) * len);
	if (tab == 0)
		return (0);
	while (i < len)
	{
		tab[i] = ft_atoi(av[i]);
		i++;
	}
	return (tab);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str, int output)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(output, &str[i], 1);
		i++;
	}
}

int	ft_puterror(int msg)
{
	if (msg == 0)
		ft_putstr("Error\n", 2);
	if (msg == 1)
		ft_putstr("Error, wrong number of arguments\n", 2);
	if (msg == 2)
		ft_putstr("Error, dynamic allocation failure\n", 2);
	return (0);
}
