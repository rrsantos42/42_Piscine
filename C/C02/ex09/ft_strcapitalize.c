/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 08:23:18 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/10 22:26:27 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{	
	char	c;
	int		i;
	int		a;

	i = 0;
	a = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (a == 1 && c >= 'a' && c <= 'z')
		{
			str[i] -= 32;
		}
		else if (a == 0 && c >= 'A' && c <= 'Z')
		{
			str[i] += 32;
		}
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			a = 1;
		else
			a = 0;
		i++;
	}
	str[i] = '\0';
	return (str);
}
