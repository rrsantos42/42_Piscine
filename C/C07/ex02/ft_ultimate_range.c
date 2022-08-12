/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 06:19:00 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/12 06:35:48 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	
	i = 0;
	if (min <= max)
	{	
		range[0] == NULL;
		return(0);
	}
	*range = malloc((max - min) * sizeof(int ));
	if (!*range)
		return(-1);
	while (i < max - min)
	{
		*range[i] = min + i;
		i++;
	}
	return(i);
}