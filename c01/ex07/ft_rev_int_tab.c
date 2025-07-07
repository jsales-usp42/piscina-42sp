/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsales-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:04:12 by jsales-p          #+#    #+#             */
/*   Updated: 2025/04/28 11:13:32 by jsales-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	auxiliary;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		auxiliary = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = auxiliary;
		i++;
	}
}
