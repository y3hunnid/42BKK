/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanagi <yanagi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:27:42 by yanagi            #+#    #+#             */
/*   Updated: 2024/11/25 23:38:10 by yanagi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strlowcase(char *str);

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
            i++;
    }
    return(str);
}

#include <stdio.h>
/*
int main()
{
    char a[] = "KENDRICK";
    printf("%s\n", ft_strlowcase(a));
    return (0);
}*/