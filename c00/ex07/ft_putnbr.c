/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:14:55 by jsales-p          #+#    #+#             */
/*   Updated: 2025/04/21 13:43:11 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	trat_negative(int n)
{
	int	positive;	

	if (n < 0)
		positive = n * (-1);
	else
		positive = n;
	return (positive);
}

void	ft_putnbr(int nb)
{
	char	nb_dig;
	int		div;
	int		nb_num;
	int		number;
	int		number_trat;

	number = nb;
	number_trat = trat_negative(number);
	div = 1;
	while (number_trat / div >= 10)
	{
		div *= 10;
	}
	if (number < 0)
		write(1, "-", 1);
	while (div > 0)
	{
		nb_num = number_trat / div;
		nb_dig = nb_num + '0';
		write(1, &nb_dig, 1);
		number_trat = number_trat % div;
		div /= 10;
	}
}
