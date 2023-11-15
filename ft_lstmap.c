/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:25:28 by benny             #+#    #+#             */
/*   Updated: 2023/11/15 19:08:19 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*current;

	if (!lst)
		return (NULL);
	nlist = ft_lstnew(f(lst->content));
	if (!nlist)
	{
		ft_lstdelone(nlist, del);
		return (NULL);
	}
	current = nlist;
	while (lst->next)
	{
		lst = lst->next;
		current->next = ft_lstnew(f(lst->content));
		if (!current->next)
		{
			ft_lstclear(&current, del);
			return (NULL);
		}
		current = current->next;
	}
	return (nlist);
}
