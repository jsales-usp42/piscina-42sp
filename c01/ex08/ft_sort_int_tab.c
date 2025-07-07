/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:17:14 by jsales-p          #+#    #+#             */
/*   Updated: 2025/04/28 11:27:06 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	auxiliary;
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j <= size)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				auxiliary = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = auxiliary;
			}
			i++;
		}
		i = 0;
		j++;
	}
}
