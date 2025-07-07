/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 16:44:29 by jsales-p          #+#    #+#             */
/*   Updated: 2025/05/04 17:23:48 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("%d\n", ft_find_next_prime(-8));
	printf("%d\n", ft_find_next_prime(-2));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(32));
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

int	ft_find_next_prime(int nb)
{
	int	is_prime;
	int	i;
	int	current_value;

	is_prime = ft_is_prime(nb);
	if (is_prime == 1)
		return (nb);
	i = 0;
	while (is_prime != 1)
	{
		current_value = nb + i;
		is_prime = ft_is_prime(current_value);
		i++;
	}
	return (current_value);
}
