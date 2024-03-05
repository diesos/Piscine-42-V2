/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <omeoztur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:17:21 by omeoztur          #+#    #+#             */
/*   Updated: 2024/02/28 12:38:24 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
	{
		dest[i] = *src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_lencount(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	if (!strs || !sep)
		return (-1);
	if (!size)
		return (0);
	len = 0;
	i = 0;
	while (i < size)
	{
		if (!strs[i])
			return (-1);
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len + (size - 1) * ft_strlen(sep));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*dest;
	int		len;
	int		i;

	if (size == 0)
	{
		dest = (char *)malloc(sizeof(char) * 1);
		return (dest);
	}
	len = ft_lencount(size, strs, sep);
	if (len < 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = -1;
	while (++i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < (size - 1))
			str = ft_strcat(str, sep);
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*array[] = {"Hello", "World", "Bonjour", "LeMonde"};
	char	*sep;
	char	*result;

	sep = "____";
	result = ft_strjoin(0, array, sep);
	if (result != NULL)
	{
		printf("%s\n", result);
		free(result); // Free the allocated memory
	}
	return (0);
} */
/* gcc -Wall -Wextra -Werror -fsanitize=address ft_strjoin.c */
