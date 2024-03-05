/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeoztur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:18:00 by omeoztur          #+#    #+#             */
/*   Updated: 2024/02/11 10:08:14 by omeoztur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	if (len != 0)
	{
		while (i < size - 1)
		{
			if (src[i] == '\0')
				break ;
			else
			{
				dest[i] = src[i];
				i++;
			}
		}
		return (i);
	}
	else
		return (0);
}
