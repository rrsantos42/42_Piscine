/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:19:04 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/14 00:19:06 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}	
}

int	main(int argc, char **argv)
{
	int	x;
	int	i;

	x = 1;
	i = argc - 1;
	if (argc > 1)
	{
		while (x < argc)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
			i--;
			x++;
		}
	}
}
