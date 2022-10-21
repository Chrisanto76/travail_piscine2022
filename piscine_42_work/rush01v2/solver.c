/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:44:57 by amuller           #+#    #+#             */
/*   Updated: 2022/09/25 13:45:01 by amuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_search_next(int **board, int *row, int *col)
{
	int	i;
	int	j;
	
	i = 1;
	while (i < board[0][0] + 1)
	{
		j = 1;
		while (j < board[0][0] + 1)
		{
			if (board[i][j] == 0)
			{
				*row = i;
				*col = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_row(int **board, int row, int value)
{
	int	col;
	
	col = 1;
	while (col < board[0][0] + 1)
	{
		if (board[row][col] == value)
			return (0);
		col++;
	}
	return (1);
}

int	ft_check_col(int **board, int col, int value)
{
	int	row;
	
	row = 1;
	while (row < board[0][0] + 1)
	{
		if (board[row][col] == value)
			return (0);
		row++;
	}
	return (1);
}

int	ft_can_place(int **board, int row, int col, int value)
{
	if (ft_check_row(board, row, value) && ft_check_col(board, col, value)
		&& board[row][col] == 0)
		return (1);
	return (0);
}

int	ft_board_solver(int **board)
{
	int	col;
	int	row;
	int	value;
	
	col = 1;
	row = 1;
	if (!ft_search_next(board, &row, &col))
		if (ft_check_board(board))
			return (1);
	value = 1;
	while (value <= board[0][0])
	{
		if (ft_can_place(board, row, col, value))
		{
			board[row][col] = value;
			if (ft_board_solver(board))
				return (1);
			board[row][col] = 0;
		}
		value++;
	}
	return (0);
}
