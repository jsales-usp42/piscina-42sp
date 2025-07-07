/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:36:36 by jsales-p          #+#    #+#             */
/*   Updated: 2025/04/30 15:55:46 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "Jessica";
	char	s2[] = "jessica";

	printf("%d\n", strcmp(s1, s2));
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	comparison;

	i = 0;
	comparison = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	comparison = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (comparison);
}
