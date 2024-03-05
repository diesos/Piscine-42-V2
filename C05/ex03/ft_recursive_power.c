/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:08:17 by omeoztur          #+#    #+#             */
/*   Updated: 2024/02/24 16:16:56 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	result;

	result = nb;
	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power - 1)));
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(3, 3));
	printf("%d\n", ft_recursive_power(2, 2));
	printf("%d\n", ft_recursive_power(1, 1));
	printf("%d\n", ft_recursive_power(0, 0));
}
 */
