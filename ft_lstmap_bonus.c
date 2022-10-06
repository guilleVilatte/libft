/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilatte <gvilatte@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:54:24 by gvilatte          #+#    #+#             */
/*   Updated: 2022/10/01 15:48:41 by gvilatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*ptr;
	void	*temp;

	list = NULL;
	while (lst)
	{
		temp = f(lst->content);
		ptr = ft_lstnew(temp);
		if (!(ptr))
		{
			del(temp);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, ptr);
		lst = lst->next;
	}
	return (list);
}
