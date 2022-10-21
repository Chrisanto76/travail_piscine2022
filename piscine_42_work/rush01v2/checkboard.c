int	ft_check_leftrow(int **board)
{
	int	row;
	int	col;
	int	view;
	int	count;
	
	row = 1;
	while (row < board[0][0] + 1)
	{
		view = 0;
		count = 0;
		col = 1;
		while (col < board[0][0] + 1)
		{
			if (board[row][col] > view)
			{
				view = board[row][col];
				count++;
			}
			col++;
		}
		if (!(board[row][0] == count))
			return (0);
		row++;
	}
	return (1);
}
int	ft_check_rightrow(int **board)
{
	int	row;
	int	col;
	int	view;
	int	count;
	
	row = 1;
	while (row < board[0][0] + 1)
	{
		view = 0;
		count = 0;
		col = board[0][0];
		while (col > 0)
		{
			if (board[row][col] > view)
			{
				view = board[row][col];
				count++;
			}
			col--;
		}
		if (!(board[row][board[0][0] + 1] == count))
			return (0);
		row++;
	}
	return (1);
}
int	ft_check_upcol(int **board)
{
	int	row;
	int	col;
	int	view;
	int	count;
	
	col = 1;
	while (col < board[0][0] + 1)
	{
		view = 0;
		count = 0;
		row = 1;
		while (row < board[0][0] + 1)
		{
			if (board[row][col] > view)
			{
				view = board[row][col];
				count++;
			}
			row++;
		}
		if (!(board[0][col] == count))
			return (0);
		col++;
	}
	return (1);
}
int	ft_check_downcol(int **board)
{
	int	row;
	int	col;
	int	view;
	int	count;
	
	col = 1;
	while (col < board[0][0] + 1)
	{
		view = 0;
		count = 0;
		row = board[0][0];
		while (row > 0)
		{
			if (board[row][col] > view)
			{
				view = board[row][col];
				count++;
			}
			row--;
		}
		if (!(board[board[0][0] + 1][col] == count))
			return (0);
		col++;
	}
	return (1);
}
int	ft_check_board(int **board)
{
	if (ft_check_leftrow(board) && ft_check_rightrow(board)
		&& ft_check_upcol(board) && ft_check_downcol(board))
		return (1);
	return (0);
}
