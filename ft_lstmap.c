/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <sabra@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:09:39 by sabra             #+#    #+#             */
/*   Updated: 2020/11/06 20:38:27 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;

	if (!lst)
		return (NULL);
	while (lst)
	{
		f(lst->content);
		if (!(elem = (t_list *)malloc(sizeof(elem))))
		{
			return (NULL);
		}
		elem = lst;
		del(lst->content);
		free(lst);
		lst = elem->next;
	}
	return (lst);
}