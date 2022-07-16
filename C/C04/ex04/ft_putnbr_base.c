/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:21:30 by rsantos           #+#    #+#             */
/*   Updated: 2022/07/13 15:21:33 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	vrbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		if (base[0] == '\0' || base[1] == '\0')
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{	
			if (base[i] == base[j])
				return (0);
			j++;
		}	
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len;
	unsigned int	num;

	len = 0;
	if (vrbase(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			num = -nbr;
		}
		else
		num = nbr;
		while (base[len] != '\0')
			len++;
		if (num / len > 0)
		{
			ft_putnbr_base(num / len, base);
		}
		ft_putchar(base[num % len]);
	}
}
int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	number;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	signal = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			signal *= -1;
		}
		i++;
	}
	number = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	return (number * signal);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
}
