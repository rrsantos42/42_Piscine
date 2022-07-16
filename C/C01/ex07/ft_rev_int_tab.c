/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 23:55:49 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/04 23:56:41 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	k;

	i = 0;
	k = size - 1;
	while (i < (size / 2))
	{
		a = tab[i];
		tab[i] = tab[k];
		tab[k] = a;
		i++;
		k--;
	}
}
