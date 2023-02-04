/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahameed <ahameed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 21:14:54 by ahameed           #+#    #+#             */
/*   Updated: 2022/01/13 07:36:49 by ahameed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_len(const char *str, char c, int *index)
{
	int	i;

	i = 0;
	while (str[*index] != c && str[*index])
	{
		i++;
		(*index)++;
	}
	return (i);
}

int	ft_str_nbr(const char *str, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			nbr++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (nbr);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		index;
	int		len;
	int		i;
	int		start;

	index = 0;
	str = (char **)malloc(sizeof(char *) * ft_str_nbr(s, c) + 1);
	if (!(str))
		return (0);
	while (s[index] && s[index] == c)
		index++;
	i = 0;
	while (s[index])
	{
		start = index;
		if (s[index] != c && i < ft_str_nbr(s, c))
		{
			len = ft_str_len(s, c, &index);
			str[i++] = ft_substr(s, start, len);
		}
		index++;
	}
	str[i] = 0;
	return (str);
}
