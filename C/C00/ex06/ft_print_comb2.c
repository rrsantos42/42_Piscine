/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 00:17:41 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/03 00:17:44 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	xx;
	int	yy;

	xx = 0;
	while (xx <= 98)
	{
		yy = xx + 1;
		while (yy <= 99)
		{
			ft_putchar (xx / 10 + '0');
			ft_putchar (xx % 10 + '0');
			ft_putchar (' ');
			ft_putchar (yy / 10 + '0');
			ft_putchar (yy % 10 + '0');
			if (xx < 98)
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			yy++;
		}
		xx++;
	}
}
