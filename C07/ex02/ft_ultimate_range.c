/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:03:47 by omeoztur          #+#    #+#             */
/*   Updated: 2024/02/27 18:14:03 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	i = 0;
	if (min < max)
	{
		size = max - min;
		*range = malloc(sizeof(int) * size);
		tab = *range;
		if (!*range)
			exit(0);
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
		*range = tab;
		return (size);
	}
	*range = NULL;
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	int	*tab;

	printf("Expected : 5 // Got : %d\n", ft_ultimate_range(&tab, 0, 5));
	printf("Expected : 0, 1, 2, 3, 4 : Got : ");
	ft_ultimate_range(&tab, 0, 5);
	for (int i = 0; i < 5; i++)
	{
		if (i == 4)
			printf("%d\n", tab[i]);
		else
			printf("%d, ", tab[i]);
	}
	printf("Expected : -5, -4 , -3, -2, -1, 0, 1, 2, 3, 4 || Got : ");
	ft_ultimate_range(&tab, -5, 5);
	for (int i = 0; i < 10; i++)
	{
		if (i == 9)
			printf("%d\n", tab[i]);
		else
			printf("%d, ", tab[i]);
	}
	printf("\n");
	printf("Expected : 6 // Got : %d\n", ft_ultimate_range(&tab, -1, 5));
} */
