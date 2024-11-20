/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ju <ju@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:19:12 by jdupuis           #+#    #+#             */
/*   Updated: 2024/11/20 18:38:18 by ju               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	n_lst = head;
	while (lst && lst->next)
	{
		if (!n_lst)
			return (NULL);
		n_lst->next = ft_lstnew(f(lst->next->content));
		n_lst = n_lst->next;
		lst = lst->next;
	}
	return (head);
}
