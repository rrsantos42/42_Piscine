/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 00:21:08 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/14 00:21:11 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

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

char	aux(char **arg, int size )
{
	int		i;
	char	*c;

	i = 1;
	while (i < size -1)
	{
		if (ft_strcmp(arg[i], arg[i + 1]) > 0)
		{
			c = arg[i];
			arg[i] = arg[i + 1];
			arg[i + 1] = c;
			i = 1;
		}
		else
			i++;
	}
	return (**arg);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		aux(argv, argc);
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
			i++;
		}
	}
}
