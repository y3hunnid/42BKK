/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmin <shmin@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:20:06 by shmin             #+#    #+#             */
/*   Updated: 2024/12/04 02:37:02 by shmin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int inter(char *str, char c, int len)
{
	int i;
	i = 0;

	while(str[i] && (i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc,char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if(!inter(argv[1], argv[1][i], i) && inter(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

