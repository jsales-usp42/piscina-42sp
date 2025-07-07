/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:46:39 by jsales-p          #+#    #+#             */
/*   Updated: 2025/04/30 15:18:08 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	s1[] = "jessica";

	printf("%d\n", ft_str_is_alpha(s1));
	return (0);
}*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	parameter;

	i = 0;
	parameter = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
			{
				parameter = 0;
				break ;
			}
		}
		i++;
	}
	if (parameter != 1)
		return (0);
	else
		return (1);
}
