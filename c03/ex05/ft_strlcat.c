/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:51:41 by jsales-p          #+#    #+#             */
/*   Updated: 2025/05/03 19:04:16 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	s1[20] = "jessica";
	char	s2[] = "sales";
	int	n;

	n = 20;
	printf("%d", ft_strlcat(s1, s2, n));
	return (0);
}*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	k;
	int	size_original_dest;

	i = 0;
	j = 0;
	k = -1;
	while (dest[i])
		i++;
	size_original_dest = i;
	while (src[j])
		j++;
	if ((unsigned int) i < size)
	{
		while ((unsigned int)++k < (size - 1 - i) && src[k])
		{
			dest[i] = src[k];
			i++;
		}
		dest[i] = '\0';
		return (size_original_dest + j);
	}
	else
		return (size + j);
}
