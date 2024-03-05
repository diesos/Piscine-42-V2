/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:34:34 by omeoztur          #+#    #+#             */
/*   Updated: 2024/02/21 12:58:56 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_cmpswap(int i, int ac, char *av[], int buffer)
{
	char	*tmp;

	buffer = 0;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			buffer = 1;
		}
		i++;
	}
	return (buffer);
}

int	main(int ac, char *av[])
{
	int		i;
	int		j;
	int		buffer;

	if (ac > 1)
	{
		j = 0;
		buffer = 1;
		while (buffer)
		{
			buffer = 0;
			i = 1;
			buffer = ft_cmpswap(i, ac, av, buffer);
		}
		i = 0;
		while (ac > ++i)
		{
			j = 0;
			ft_putstr(av[i]);
			write(1, "\n", 1);
		}
		return (0);
	}
	return (1);
}
