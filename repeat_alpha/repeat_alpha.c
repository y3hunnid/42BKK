/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmin <shmin@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 01:01:39 by shmin             #+#    #+#             */
/*   Updated: 2024/12/04 01:15:08 by shmin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int letter_count(char b)
{
	int repeat;
	if (b >= 'A' && b <= 'Z')
		repeat = b - 'A' + 1;
	else if (b >= 'a' && b <= 'z')
		repeat = b - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int main(int ac, char **av)
{
	int repeat;
	if (ac == 2)
	{
		while (*av[1])
		{
			repeat = letter_count(*av[1]);
			while(repeat--)
				write(1, av[1], 1);
			av[1]++;
		}
	}
	ft_putchar('\n');
}

