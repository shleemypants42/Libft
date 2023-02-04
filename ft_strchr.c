/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahameed <ahameed@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 13:13:26 by ahameed           #+#    #+#             */
/*   Updated: 2022/01/01 18:08:02 by ahameed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
	{
		return ((char *)s + i);
	}
	return (0);
}

/*int main()
{
	char c;
	const char *b;
	char *ret;

	b = "hello";
	c = 'h';
	ret = ft_strchr (b, c);
	printf("%s", ret);
	return (0);
}*/
