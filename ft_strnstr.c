/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahameed <ahameed@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:53:51 by ahameed           #+#    #+#             */
/*   Updated: 2022/01/01 18:39:02 by ahameed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;
	char	*str;
	char	*ptr;
	int		l;

	i = 0;
	str = (char *)haystack;
	ptr = (char *)needle;
	while (str[i] && i <= len && ptr)
	{
		x = i;
		l = 0;
		while (str[x] == ptr[l] && x < len)
		{
			x++;
			l++;
			if (ptr[l] == '\0')
				return (&str[i]);
		}
		i++;
	}
	if (ptr[0] == '\0')
		return (str);
	return (0);
}
