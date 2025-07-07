/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:49:33 by jsales-p          #+#    #+#             */
/*   Updated: 2025/04/30 15:22:32 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	s1[] = "ABC";

	printf("%d\n", ft_str_is_uppercase(s1));
	return (0);
}*/

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	parameter;

	i = 0;
	parameter = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			parameter = 0;
			break ;
		}
		i++;
	}
	if (parameter != 1)
		return (0);
	else
		return (1);
}
