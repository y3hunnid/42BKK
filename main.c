/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akichaev <akichaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:19:35 by akichaev          #+#    #+#             */
/*   Updated: 2024/11/24 09:28:01 by akichaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(int x, int y);
int		parse_argv(char *argv[], int *x, int *y);
int		ft_atoi(char *str);
void	print_str(char *s);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc < 3)
	{
		print_str("not enought argument, must be 2");
		return (1);
	}
	if (parse_argv(argv, &x, &y) != 0)
	{
		print_str("cannot parse args");
		return (1);
	}
	rush(x, y);
	return (0);
}

int	parse_argv(char *argv[], int *x, int *y)
{
	int	a;
	int	b;

	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[2]);
	if (a < 0 || b < 0)
	{
		return (1);
	}
	*x = a;
	*y = b;
	return (0);
}

char	*skip_space(char *str)
{
	while ((*str == ' ') || (*str == '\t') || (*str == '\n') || (*str == '\v')
		|| (*str == '\f') || (*str == '\r'))
		str++;
	return (str);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	str = skip_space(str);
	if (*str == '-')
		sign = -1;
	while (*str == '-' || *str == '+')
		str++;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = (result * 10) + (*str - '0');
		}
		else
		{
			break ;
		}
		str++;
	}
	return (result * sign);
}
