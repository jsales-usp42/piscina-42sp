/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:03:05 by jsales-p          #+#    #+#             */
/*   Updated: 2025/04/19 17:55:59 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	digs1[2];
	char	digs2[2];
	int		num1;
	int		num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			digs1[0] = num1 / 10 + '0';
			digs1[1] = num1 % 10 + '0';
			digs2[0] = num2 / 10 + '0';
			digs2[1] = num2 % 10 + '0';
			write(1, &digs1, 2);
			write(1, " ", 1);
			write(1, &digs2, 2);
			if (!(digs1[0] == '9' && digs1[1] == '8'))
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}
