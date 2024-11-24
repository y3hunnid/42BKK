/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01practice.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanagi <yanagi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:44:07 by yanagi            #+#    #+#             */
/*   Updated: 2024/11/24 18:59:04 by yanagi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

int is_corner(int row, int col, int current_row, int current_col)
{
    return ((current_row == 0 && current_col == 0) || (current_row == row
			&& current_col == 0) || (current_row == row && current_col == col)
		    || (current_row == 0 && current_col == col));
}

int is_vertical(int row, int col, int current_row, int current_col)
{
    if (is_corner(row, col, current_row, current_col))
        return (0);
    return (current_col == col || current_col == 0);
}

int is_corner_printed(int row, int col, int current_row, int current_col)
{
    if ((current_row == 0 && current_col == 0))
    {
        ft_putchar('A');
        return (1);
    }
    if ((current_row == 0 && current_col == col))
    {
        ft_putchar('B');
        return (1);
    }
     if ((current_row == row && current_col == 0))
    {
        ft_putchar('C');
        return (1);
    }
    if ((current_row == row && current_col == col))
    {
        ft_putchar('A');
        return (1);
    }
    return (0);
}

void main_algo(int row, int col, int current_row, int current_col)
{
    int i;

    if (is_corner_printed(row, col, current_row, current_col))
    return ;

    if (!is_corner(row, col, current_row, current_col) && (current_row == 0 || current_row == row))
    {
        ft_putchar('B');
        return ;
    }
    if (is_vertical(row, col, current_row, current_col))
    {
        if (col == current_col)
        {
            i = 0;
            while ( i < col - 1)
            {
                ft_putchar(' ');
                i++;
            }
        }
         ft_putchar('B');
        return ;
    }
}

   

void rush(int x, int y)
{
    int i;
    int j;
    int row;
    int col;

    row = y;
    col = x;
    i = 0;
    while ( i < row)
    {
        j = 0;
        while ( j < col)
        {
            main_algo(row - 1, col - 1, i, j);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}   
