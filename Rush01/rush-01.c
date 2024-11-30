#include "ft_header.h"

void rush_recursive(char **puzzle_board, int row, int col)
{
    int i;
    i = 1;

    while (i <= 4 && row <= 4 && col <= 4)
    {
        if (!is_in_column(puzzle_board, row, col, i) && !is_in_row(puzzle_board, row, col, i))
        {
            puzzle_board[row][col] = i + '0';
            if (row == 4 && !is_correct_top_view(puzzle_board, col))
                return ;
            if (col == 4)
            {
                if (is_correct_left_view(puzzle_board, row))
                {
                    rush_recursive(puzzle_board, row + 1, 1);
                    if (row == 4 && is_correct_top_view(puzzle_board, col))
                        print_solution(puzzle_board);
                }
            }
            else
                rush_recursive(puzzle_board, row, col + 1);
        }
        i++;
    }
}

void rush(char **clues)
{
    char **puzzle_board;

    puzzle_board = create_board();

    set_clues(puzzle_board, clues);

    rush_recursive(puzzle_board, 1, 1);

    if (puzzle_board[0][0] == '0')
        print_error();
}