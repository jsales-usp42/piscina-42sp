/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 16:00:16 by jsales-p          #+#    #+#             */
/*   Updated: 2025/05/04 18:02:53 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("%d\n", ft_sqrt(-25));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(36));
	printf("%d\n", ft_sqrt(49));
	printf("%d\n", ft_sqrt(10));
	printf("%d\n", ft_sqrt(26));
	printf("%d\n", ft_sqrt(37));
	printf("%d\n", ft_sqrt(50));
	return (0);
}*/

int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	i = 0;
	while (i <= nb && result != nb)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
