#ifndef FT_HEADER
# define FT_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c);
void print_error(void);
void print_solution(char **puzzle_board);

void set_clues(char **puzzle_board, char **clues);
char **memory_allocation(int rows, int cols);
char **create_board(void);
char **convert_in_array(char *str);
int is_correct_params(char **argv);

int is_correct_left_view(char **puzzle_board, int row);
int is_correct_top_view(char **puzzle_board, int cols);
int is_in_column(char **puzzle_board, int row, int cols, int digit);
int is_in_row(char **puzzle_board, int row, int cols, int digit);

void rush(char **clues);

#endif