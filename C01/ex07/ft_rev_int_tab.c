/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:56:22 by omeoztur          #+#    #+#             */
/*   Updated: 2024/02/11 10:00:54 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	size_tab;
	int	tmp;

	if (!tab)
		return ;
	i = 0;
	size_tab = size - 1;
	while (i < size_tab)
	{
		tmp = tab[size_tab];
		tab[size_tab] = tab[i];
		tab[i] = tmp;
		i++;
		size_tab--;
	}
}
