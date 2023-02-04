/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahameed <ahameed@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 20:40:53 by ahameed           #+#    #+#             */
/*   Updated: 2022/01/01 23:26:57 by ahameed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_number(int n)
{
	int	nbr;

	nbr = 0;
	if (n < 0)
	{
		nbr++;
		n = n * -1;
	}
	else if (n == 0)
		return (1);
	while ((unsigned int) n > 0)
	{
		nbr++;
		n = (unsigned int) n / 10;
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	int		nbr;
	char	*ptr;

	nbr = ft_number(n);
	ptr = malloc(sizeof(char) * nbr + 1);
	if (n == 0)
		ptr[0] = 48;
	if (ptr == NULL)
		return (NULL);
	if (n < 0)
	{
		ptr[0] = '-';
		n = n * -1;
	}
	ptr[nbr] = '\0';
	while ((nbr - 1) >= 0 && (unsigned int) n > 0)
	{
		ptr[nbr - 1] = ((unsigned int) n % 10) + '0';
		n = (unsigned int) n / 10;
		nbr--;
	}
	return (ptr);
}
