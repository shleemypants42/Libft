/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahameed <ahameed@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 13:22:10 by ahameed           #+#    #+#             */
/*   Updated: 2022/01/01 22:57:00 by ahameed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char) c)
		{
			return ((char *) s + len);
		}
		len--;
	}
	if ((unsigned char) c == '\0')
		return ((char *) s + len);
	return (0);
}

/*int main()
{
	char c;
	const char *b;
	char *ret;

	b = "hello";
	c = 'h';
	ret = ft_strrchr (b, c);
	printf("%s", ret);
	return (0);
}*/
