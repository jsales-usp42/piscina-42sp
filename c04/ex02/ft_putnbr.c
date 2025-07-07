/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:14:55 by jsales-p          #+#    #+#             */
/*   Updated: 2025/05/02 16:18:43 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putnbr(int nb);
int		trat_negative(int n);

int	main(void)
{
	int	x;

	x = 42;
	ft_putnbr(x);
	return (0);
}*/

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
	int		number_trat;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	number_trat = trat_negative(nb);
	div = 1;
	while (number_trat / div >= 10)
		div *= 10;
	if (nb < 0)
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
