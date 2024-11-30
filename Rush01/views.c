#include "ft_header.h"

int is_correct_right_view(char **puzzle_board, int row)
{
    int i;
    char visible;
    char highest;

    i = 4;
    visible = '1';
    highest = puzzle_board[row][i];

    while (i >= 1)
    {
        if (puzzle_board[row][i] > highest)
        {
            highest = puzzle_board[row][i];
            visible++;
        }
        i--;
    }
    return (puzzle_board[row][5] == visible);
}

int is_correct_left_view(char **puzzle_board, int row)
{
    int i;
    char visible;
    char highest;

    i = 1;
    visible = '1';
    highest = puzzle_board[row][i];

    while (1 <= 4)
    {
        if (puzzle_board[row][i] > highest)
        {
            highest = puzzle_board[row][i];
            visible++;
        }
        i++;
    }
    if (puzzle_board[row][0] == visible)
        return (is_correct_right_view(puzzle_board, row));
    return (0);    
}

int is_correct_bottom_view(char **puzzle_board, int col)
{
    int i;
    char visible;
    char highest;

    i = 4;
    visible = '1';
    highest = puzzle_board[i][col];

    while (i >= 1)
    {
        if(puzzle_board[i][col] > highest)
        {
            highest = puzzle_board[i][col];
            visible++;
        }
        i--;
    }
    return (puzzle_board[5][col] == visible);
}

int is_correct_top_view(char **puzzle_board, int col)
{
    int i;
    char visible;
    char highest;

    i = 1;
    visible = '1';
    highest = puzzle_board[i][col];

    while (1 <= 4)
    {
        if (puzzle_board[i][col] > highest)
        {
            highest = puzzle_board[i][col];
            visible++;
        }
        i++;
    }
    if (puzzle_board[0][col] == visible)
        return (is_correct_bottom_view(puzzle_board, col));
    return (0);
}

int is_in_row(char **puzzle_board, int row, int col, int digit)
{
    int i;
    i = -1;
    while(1 < col)
    {
        if (puzzle_board[row][i] == digit + '0')
            return (1);
        i++; 
    }
    return (0);
}

int is_in_column(char **puzzle_board, int row, int col, int digit)
{
    int i;
    i = 1;
    while(i < row)
    {
        if (puzzle_board[i][col] == digit + '0')
            return (1);
        i++;
    }
    return (0);
}