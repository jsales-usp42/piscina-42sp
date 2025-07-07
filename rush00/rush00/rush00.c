/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 08:30:48 by jsales-p          #+#    #+#             */
/*   Updated: 2025/04/19 17:06:31 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush_interior(int x, int y)
{
	int	character;
	int	line;

	character = 1;
	line = 1;
	while (line <= (y - 2))
	{
		while (character <= x)
		{
			if (character == 1 && x != 1)
				ft_putchar('|');
			if (character > 1 && character < x)
				ft_putchar(' ');
			if (character == x)
			{
				ft_putchar('|');
				ft_putchar('\n');
			}
			character++;
		}
		character = 1;
		line++;
	}
}

void	rush_extremes(int x)
{
	int	character;

	character = 1;
	while (character <= x)
	{
		if (character == 1 && x != 1)
			ft_putchar('o');
		if (character > 1 && character < x)
			ft_putchar('-');
		if (character == x)
		{
			ft_putchar('o');
			ft_putchar('\n');
		}
		character++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0 || x >= 1000000 || y >= 1000000)
	{
		write(1, "Insira um valor válido!", 23);
		return ;
	}
	if (y == 1)
		rush_extremes(x);
	else
	{
		rush_extremes(x);
		rush_interior(x, y);
		rush_extremes(x);
	}
}
