/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 22:58:54 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/11 22:58:56 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	j = 0;
	k = 0;
	i = 0;
	while (dest[j])
		j++;
	while (src[k])
		k++;
	if (size <= j)
		return (k + size);
	while ((src[i] && j + i) < (size - 1))
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (k + j);
}
