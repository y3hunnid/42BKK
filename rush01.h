/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akichaev <akichaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:19:46 by akichaev          #+#    #+#             */
/*   Updated: 2024/11/23 14:54:05 by akichaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	main_algo(int x, int y, int i, int j);
int		is_top_bottom_row(int current_y, int y);
int		is_conner(int row, int col, int current_row, int current_col);
void	rush(int x, int y);

void	print_lu(void);
void	print_ru(void);
void	print_lb(void);
void	print_rb(void);
void	print_gap(void);
