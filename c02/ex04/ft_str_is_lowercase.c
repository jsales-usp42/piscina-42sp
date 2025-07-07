/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:27:39 by jsales-p          #+#    #+#             */
/*   Updated: 2025/04/30 15:16:29 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	s1[] = "abc";

	printf("%d\n", ft_str_is_lowercase(s1));
	return (0);
}*/

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	parameter;

	i = 0;
	parameter = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
