/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:17:01 by amuller           #+#    #+#             */
/*   Updated: 2022/09/24 20:01:29 by amuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

#include <unistd.h>
#include <stdlib.h>

int	ft_check_leftrow(int **board);
int	ft_check_rightrow(int **board);
int	ft_check_upcol(int **board);
int	ft_check_downcol(int **board);
int	ft_check_row(int **board, int row, int value);
int	ft_check_col(int **board, int col, int value);
int	ft_check_board(int **board);
int	ft_can_place(int **board, int row, int col, int value);
int	ft_number_count(char *str);
int	ft_atoi(char *str);
int	ft_recursive_board(int **board, int size, int row, int col);
int	ft_board_solver(int **board);
void	ft_print_board(int **board);
int	ft_puterror(int msg);
void	ft_putstr(char *str, int output);
void	ft_putchar(char c);
void	ft_put_putargs(int **board, int args, int size);
int	**ft_alloc_board(int *args, int size);
int	*ft_get_args(int size, char *str);
int	ft_program_manager(int size, int *args);

#endif
