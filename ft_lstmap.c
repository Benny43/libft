/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benny <benny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:25:28 by benny             #+#    #+#             */
/*   Updated: 2023/10/28 02:44:00 by benny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*nnode;

	nlist = NULL;
	while (lst)
	{
		nnode = ft_lstnew((f)(lst->content));
		if (!nnode)
			ft_lstclear(&nnode, del);
		ft_lstadd_back(&nlist, nnode);
		lst = lst->next;
	}
	return (nlist);
}
