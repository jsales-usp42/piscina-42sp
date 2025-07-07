/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 16:20:55 by jsales-p          #+#    #+#             */
/*   Updated: 2025/05/03 13:19:44 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>

int		numbers_letters(char *str);
int		convert(char *str, int j);
int		ft_atoi(char *str);
void	space_sign(char *str, int *i, int *sign);

int	main(void)
{
	char str[] = " ---+--+1234ab567";
	printf("%d", ft_atoi(str));
	return (0);
}*/

void	space_sign(char *str, int *k, int *sign)
{
	*k = 0;
	*sign = 1;
	while (str[*k] == ' ')
		(*k)++;
	while (str[*k] == '-' || str[*k] == '+')
	{
		if (str[*k] == '-')
			*sign *= -1;
		(*k)++;
	}
}

int	convert(char *number, int j)
{
	int	factor;
	int	i;
	int	k;
	int	integer;
	int	sum;

	factor = 1;
	i = 1;
	k = 0;
	sum = 0;
	while (i < j)
	{
		factor *= 10;
		i++;
	}
	while (number[k] != '\0')
	{
		integer = (number[k] - '0') * factor;
		sum = sum + integer;
		factor /= 10;
		k++;
	}
	return (sum);
}

int	ft_atoi(char *str)
{
	int		i;
	int		j;
	int		signal;
	int		final_number;
	char	number[100];

	j = 0;
	space_sign(str, &i, &signal);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			number[j] = str[i];
		else
			break ;
		i++;
		j++;
	}
	number[j] = '\0';
	final_number = convert(number, j);
	return (signal * final_number);
}
