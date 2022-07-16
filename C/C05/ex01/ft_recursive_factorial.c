/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 04:05:33 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/14 04:05:35 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1)); 	
}
