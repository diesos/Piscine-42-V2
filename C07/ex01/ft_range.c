/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:01:25 by omeoztur          #+#    #+#             */
/*   Updated: 2024/02/27 18:14:27 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	if (min < max)
	{
		size = max - min;
		array = malloc(sizeof(int) * size);
		if (!array)
			exit(0);
		i = 0;
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
		return (array);
	}
	else
	{
		array = NULL;
		return (array);
	}
}

/* #include <stdio.h>

int	main(void)
{
	int	*range;

	range = ft_range(0, 5);
	printf("Expected : 0, 1, 2, 3, 4 \n Get : %d, %d, %d, %d, %d\n", range[0],
		range[1], range[2], range[3], range[4]);
	range = ft_range(3, 3);
	range = ft_range(-3, 3);
	printf("Expected : -3, -2, -1, 0 , 1 , 2 \nGet : %d, %d, %d, %d, %d, %d ",
		range[0], range[1], range[2], range[3], range[4], range[5]);
}
 */
