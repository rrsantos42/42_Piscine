/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 06:36:07 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/12 07:32:03 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(char *s)
{
	size_t i;
	
	i = 0;
	while(s[i])
		i++;
	return(i);
}

char	*ft_strjoin(size_t size, char **strs, char *sep)
{
	size_t i;
	size_t j;
	size_t k;
	size_t sstrs;
	char *join;
	
	j = 0;
	i = 0;
	k = 0;
	if (size == 0)
		return(NULL);
	while (j < size)
	{
		sstrs += ft_strlen(strs[j]) + ft_strlen(sep);
		j++;
	}
	join = malloc(sstrs * sizeof(char *));
	j = 0;
	while (i < size)
	{
		while (strs[i][k])
		{
			join[j] = strs[i][k];
			j++;
			k++;
		}
		k = 0;
		while (sep[k] && i < size - 1)
		{	
			join[j] = sep[k];
			j++;
			k++;
		}
		k = 0;
		i++;
	}
	join[j] = '\0';
	return(join);
}
