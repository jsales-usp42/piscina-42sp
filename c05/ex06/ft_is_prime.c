/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 16:06:06 by jsales-p          #+#    #+#             */
/*   Updated: 2025/05/04 16:40:33 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("%d\n", ft_is_prime(-8));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(15));
	printf("%d\n", ft_is_prime(21));

	return (0);
}*/

int	ft_is_prime(int nb)
{
	int	sum;
	int	i;

	sum = 0;
	i = 1;
	if (nb <= 1)
		return (0);
	while (i <= nb && sum <= 2)
	{
		if (nb % i == 0)
			sum += 1;
		i++;
	}
	if (sum == 2)
		return (1);
	else
		return (0);
}
