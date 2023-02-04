/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahameed <ahameed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:13:03 by ahameed           #+#    #+#             */
/*   Updated: 2022/01/04 10:46:54 by ahameed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	char	*ptr;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	j = ft_strlen(s1);
	while (j && ft_strchr(set, s1[j]))
		j--;
	if (j == 0)
		return ("");
	ptr = ft_substr((char *)s1, 0, j + 1);
	return (ptr);
}

// int main()
// {
// 	char *str = "";
// 	char set[] = "123";
// 	char *ptr;
// 	ptr = ft_strtrim(str, set);
// 	printf("%s\n", ptr);
// 	return (0);
// }
