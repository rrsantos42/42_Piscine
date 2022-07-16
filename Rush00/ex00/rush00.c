/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:10:15 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/02 19:25:53 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y )
{
	int	li;
	int	col;

	li = 0;
	while (++li <= y && (x > 0 && y > 0))
	{
		col = 0;
		while (++col <= x)
		{
			if (li == 1 || li == y)
			{
				if (col == 1 || col == x)
					ft_putchar('o');
				else
					ft_putchar('-');
			}
			else if (col == 1 || col == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
