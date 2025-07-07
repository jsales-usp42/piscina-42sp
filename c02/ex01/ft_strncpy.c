/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 14:29:55 by jsales-p          #+#    #+#             */
/*   Updated: 2025/05/01 16:25:49 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	s1[] = "";
	char	s2[] = "jessica";
	int	x;	

	x = 3;
	printf("%s\n", strncpy(s1, s2, x));
	printf("%s", ft_strncpy(s1, s2, x));
	return (0);
}*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while ((unsigned int) i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while ((unsigned int) i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
