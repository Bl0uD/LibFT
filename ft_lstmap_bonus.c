/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:19:12 by jdupuis           #+#    #+#             */
/*   Updated: 2024/11/23 15:12:05 by jdupuis          ###   ########.fr       */
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
	if (!head)
		return (NULL);
	n_lst = head;
	while (lst && lst->next)
	{
		n_lst->next = ft_lstnew(f(lst->next->content));
		if (!n_lst->next)
		{
			ft_lstclear(&head, del);
			del(lst->next->content);
			return (NULL);
		}
		n_lst = n_lst->next;
		lst = lst->next;
	}
	return (head);
}
