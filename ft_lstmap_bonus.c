/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdupuis <jdupuis@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:19:12 by jdupuis           #+#    #+#             */
/*   Updated: 2024/11/23 16:34:32 by jdupuis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*head;
	void	*temp;

	if (!lst || !f || !del)
		return (NULL);
	temp = f(lst->content);
	if (!temp)
		return(NULL);
	head = ft_lstnew(temp);
	if (!head)
	{
		del(temp);
		return (NULL);
	}
	n_lst = head;
	while (lst && lst->next)
	{
		temp = f(lst->next->content);
		if (!temp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		n_lst->next = ft_lstnew(temp);
		if (!n_lst->next)
		{
			ft_lstclear(&head, del);
			del(temp);
			return (NULL);
		}
		n_lst = n_lst->next;
		lst = lst->next;
	}
	return (head);
}
