/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahameed <ahameed@student.42.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 18:00:10 by ahameed           #+#    #+#             */
/*   Updated: 2022/01/02 17:19:33 by ahameed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new;

	node = lst;
	new = ft_lstnew(f(lst -> content));
	if (!new)
		return (0);
	node = new;
	lst = lst -> next;
	while (lst)
	{
		new -> next = ft_lstnew(f(lst -> content));
		if (!new -> next)
		{
			ft_lstclear(&node, del);
			return (0);
		}
		new = new -> next;
		lst = lst -> next;
	}
	new -> next = NULL;
	return (node);
}
