/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahameed <ahameed@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:57:32 by ahameed           #+#    #+#             */
/*   Updated: 2022/01/01 16:25:30 by ahameed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;
	char	t;

	i = 0;
	s1 = (char *)s;
	t = (unsigned char)c;
	while (i < n)
	{
		if (*s1 == t)
			return (s1);
		s1++;
		i++;
	}
	return (0);
}
