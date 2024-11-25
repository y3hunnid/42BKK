/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akichaev <akichaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:19:46 by akichaev          #+#    #+#             */
/*   Updated: 2024/11/24 09:22:31 by akichaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		is_conner(int row, int col, int current_row, int current_col);
int		is_vertical(int row, int col, int current_row, int current_col);
int		is_conner_printed(int row, int col, int current_row, int current_col);
void	main_algo(int row, int col, int current_row, int current_col);

// lu
// lb
// rb
// ru
int	is_conner(int row, int col, int current_row, int current_col)
{
	return ((current_row == 0 && current_col == 0) || (current_row == row
			&& current_col == 0) || (current_row == row && current_col == col)
		|| (current_row == 0 && current_col == col));
}

int	is_vertical(int row, int col, int current_row, int current_col)
{
	if (is_conner(row, col, current_row, current_col))
		return (0);
	return (current_col == 0 || current_col == col);
}

// lu
// ru
// lb
// rb
int	is_conner_printed(int row, int col, int current_row, int current_col)
{
	if ((current_row == 0 && current_col == 0))
	{
		ft_putchar('o');
		return (1);
	}
	if (current_row == 0 && current_col == col)
	{
		ft_putchar('o');
		return (1);
	}
	if (current_row == row && current_col == 0)
	{
		ft_putchar('o');
		return (1);
	}
	if (current_row == row && current_col == col)
	{
		ft_putchar('o');
		return (1);
	}
	return (0);
}

// 'B' - gap
// last 'B' - vertical
void	main_algo(int row, int col, int current_row, int current_col)
{
	int	i;

	if (is_conner_printed(row, col, current_row, current_col))
		return ;
	if (!is_conner(row, col, current_row, current_col) && (current_row == 0
			|| current_row == row))
	{
		ft_putchar('-');
		return ;
	}
	if (is_vertical(row, col, current_row, current_col))
	{
		if (col == current_col)
		{
			i = 0;
			while (i < col - 1)
			{
				ft_putchar(' ');
				i++;
			}
		}
		ft_putchar('|');
		return ;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;
	int	row;
	int	col;

	if (!x || !y)
	{
		return ;
	}
	row = y;
	col = x;
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			main_algo(row - 1, col - 1, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
