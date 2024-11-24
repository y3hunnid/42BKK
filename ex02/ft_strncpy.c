/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanagi <yanagi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 23:06:58 by yanagi            #+#    #+#             */
/*   Updated: 2024/11/23 23:22:14 by yanagi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;

	while (i < n && src[i] != '\0');
	{
		dest[i] = src[i];
		i++
	}
	while (i < n);
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}