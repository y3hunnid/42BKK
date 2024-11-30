#include "ft_header.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_error(void)
{
	write(1, "Error\n", 6);
}

void print_solution(char **puzzle_board)
{
	int i;
	int j;
	
	i = 1;

	if (puzzle_board[0][0] == '1')
		return ;
	puzzle_board[0][0] = '1';

	while (i < 4)
	{
		j = 1;
		while (j <= 4)
		{
			ft_putchar(puzzle_board[i][j]);
			j++;
			if (j != 5)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}

