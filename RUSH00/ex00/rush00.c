/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asideris <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:43:48 by asideris          #+#    #+#             */
/*   Updated: 2024/02/10 12:02:29 by asideris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	check_error(int x, int y)
{
	if (y < 1 || x < 1)
	{
		write(1, "error\n", 7);
		return (1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	height;
	int	width;

	if (check_error(x, y) == 1)
		return ;
	height = y;
	width = x;
	while (y > 0) 
	{
		x = width;
		while (x > 0)
		{
			if ((x == width || x == 1) && (y == 1 || y == height))
				ft_putchar('o');
			else if ((x == width || x == 1))
				ft_putchar('|');
			else if (y == 1 || y == height)
				ft_putchar('-');
			else
				ft_putchar(' ');
			--x;
		}
		ft_putchar(10);
		--y;
	}
}
