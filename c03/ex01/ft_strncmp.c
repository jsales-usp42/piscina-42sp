/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:18:25 by jsales-p          #+#    #+#             */
/*   Updated: 2025/04/30 16:01:27 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "jeSsica";
	char	s2[] = "jessica";
	int	tamanho;

	tamanho = 3;
	printf("%d\n", strncmp(s1, s2, tamanho));
	printf("%d", ft_strncmp(s1, s2, tamanho));
	return (0);
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	comparison;
	int	i;

	i = 0;
	comparison = 0;
	while ((unsigned int) i < n)
	{
		if (s1[i] != s2[i])
		{
			comparison = (unsigned char) s1[i] - (unsigned char) s2[i];
			return (comparison);
		}
		if (s1[i] == '\0')
			break ;
		i++;
	}
	return (0);
}
