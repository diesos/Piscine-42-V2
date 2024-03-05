/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:37:49 by omeoztur          #+#    #+#             */
/*   Updated: 2024/02/19 15:52:35 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	str[] = "Hello";
	char	str2[] = "World!";
	char	str3[] = "abcdefghijklmnopqrstuvwxyz";

	printf("Mine : %d\n", ft_strlen(str));
	printf("Real cmd :%lu\n", strlen(str));
	printf("Mine : %d\n", ft_strlen(str2));
	printf("Real cmd %lu\n", strlen(str2));
	printf("Mine %d\n", ft_strlen(str3));
	printf("Real cmd :%lu\n", strlen(str3));
}
*/
