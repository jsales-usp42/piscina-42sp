/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 19:44:36 by jsales-p          #+#    #+#             */
/*   Updated: 2025/05/04 14:31:14 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_iterative_power(3, -2));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(3, 0));
	printf("%d\n", ft_iterative_power(3, 2));
	printf("%d\n", ft_iterative_power(-3, 2));
	printf("%d\n", ft_iterative_power(3, 4));
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(-2, 3));
	printf("%d\n", ft_iterative_power(4, 2));
	printf("%d\n", ft_iterative_power(10, 3));
	return (0);
}*/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	base;

	i = 1;
	base = nb;
	if (power < 0)
		return (0);
	if (power == 0 || (nb == 0 && power == 0))
		return (1);
	while (i < power)
	{
		nb = nb * base;
		i++;
	}
	return (nb);
}
