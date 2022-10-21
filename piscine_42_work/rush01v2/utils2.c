/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 02:55:54 by amuller           #+#    #+#             */
/*   Updated: 2022/09/25 13:47:36 by amuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_number_count(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
		{
			count++;
			i++;
		}
		if (str[i] == ' ')
			i++;
		if ((str[i] < '0' || str[i] > '9') && str[i])
			return (-1);
	}
	return (count);
}

void	ft_put_args(int **board, int *args, int size)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j < size + 1)
	{
		board[0][j] = args[j - 1];
		board[size + 1][j] = args[size + j - 1];
		j++;
	}
	while (i < size + 1)
	{
		board[i][0] = args[(size * 2) + i - 1];
		board[i][size + 1] = args[(size * 3) + i - 1];
		i++;
	}
	free(args);
}

int	**ft_alloc_board(int *args, int size)
{
	int	i;
	int	j;
	int	**board;

	board = malloc(sizeof(*board) * (size + 2));
	if (board == 0)
		return (NULL);
	i = 0;
	while (i < size + 2)
	{
		board[i] = malloc(sizeof(int) * (size + 2));
		if (board[i] == 0)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < size + 1)
	{
		j = 0;
		while (j < size + 1)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	board[0][0] = size;
	ft_put_args(board, args, size);
	return (board);
}

int	*ft_get_args(int size, char *str)
{
	int	*args;
	int	i;
	int	j;

	args = malloc(sizeof(int) * (size * 4));
	if (args == 0)
		return (NULL);
	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			args[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (args);
}

int	ft_program_manager(int size, int *args)
{
	int	**board;

	board = NULL;
	board = ft_alloc_board(args, size);
	if (ft_board_solver(board))
		ft_print_board(board);
	else
		ft_puterror(0);
	return (0);
}
