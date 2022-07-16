/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:25:32 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/10 23:59:07 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char*dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	while (i > n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
