/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahameed <ahameed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:45:48 by ahameed           #+#    #+#             */
/*   Updated: 2022/01/10 17:19:16 by ahameed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(s))
		return (0);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	sub = malloc(sizeof(char) * len + 1);
	if (!(sub))
		return (0);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
}

// int main()
// {
// 	char	*str;
// 	char *ptr;

// 	str = "i like eating banana";
// 	ptr = ft_substr(str, 60, 2);
// 	printf("%s", ptr);
// 	return (0);
// }
