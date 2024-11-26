/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmin <shmin@student.42bangkok.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:18:11 by shmin             #+#    #+#             */
/*   Updated: 2024/11/26 17:54:19 by shmin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src [j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char *t;

	char b[20] = "hello there";

	char a[20] = "abcdefg";

	t = ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}*/
