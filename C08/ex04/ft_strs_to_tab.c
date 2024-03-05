/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:10:19 by qalpesse          #+#    #+#             */
/*   Updated: 2024/02/28 14:59:17 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

/* typedef struct s_stock_str
{
	int				size;
	char			*str;
	char			*copy;
}					t_stock_str; */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		length;

	length = ft_strlen(src);
	dest = (char *)malloc(length * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == NULL)
		return (tab);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
/*
#include <stdio.h>

int	main(int ac, char *av[])
{
	int					i;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(ac, av);
	i = 0;
	for (; i < ac; i++)
	{
		printf("------------------------------------\n");
		printf("| Size     : %d\n", structs[i].size);
		printf("| String     : %s\n", structs[i].str);
		printf("| Copy     : %s\n", structs[i].copy);
		printf("------------------------------------\n");
	}
	return (0);
} */
