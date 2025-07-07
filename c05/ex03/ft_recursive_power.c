/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:43:23 by jsales-p          #+#    #+#             */
/*   Updated: 2025/05/04 14:58:07 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_recursive_power(3, -2));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(3, 0));
	printf("%d\n", ft_recursive_power(3, 2));
	printf("%d\n", ft_recursive_power(-3, 2));
	printf("%d\n", ft_recursive_power(3, 4));
	printf("%d\n", ft_recursive_power(2, 3));
	printf("%d\n", ft_recursive_power(-2, 3));
	printf("%d\n", ft_recursive_power(4, 2));
	printf("%d\n", ft_recursive_power(10, 3));
	return (0);
}*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || (nb == 0 && power == 0))
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
