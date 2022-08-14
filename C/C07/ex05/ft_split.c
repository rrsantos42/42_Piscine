/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 07:32:34 by rsantos           #+#    #+#             */
/*   Updated: 2022/08/14 18:04:22 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t i;
	char *str;
	
	i = 0;
	if (len < ft_strlen((char *)s))
		str = malloc((len + 1) * sizeof(char));
	if(len > ft_strlen((char *)s))
		str = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (!str)
		return(NULL);
	
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return(str);
}

static size_t	word_counter(const char *s, char c)
{
	size_t i;
	size_t res;
	
	res = 0;
	i = 0;
	if(!s)
		return(0);
	while (s[i] == c && s[i])
			i++;
	if (i == ft_strlen(s))
		return(0);
	i = 0;
	if (s[i] && s[i] != c)
		res += 1;
	
	while (s[i])
	{								
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
		
		if (!s[i])
			break;
		res += 1;
	}
	return(res);
}
char	**ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t k;
	size_t res;
	char **split;
	
	res = word_counter(s, c);
	split = malloc((res + 1) * sizeof(char *));
	if(!split)
		return(NULL);
	i = 0;
	k = 0;
	j = 0;
	while (s[i] && k < res)
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		split[k] = ft_substr(s, j, i - j);
		k++;
	}
	split[res] = 0;
	return(split);
}