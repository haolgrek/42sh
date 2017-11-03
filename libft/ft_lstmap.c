/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 21:52:15 by rluder            #+#    #+#             */
/*   Updated: 2017/01/27 21:52:16 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*retour;
	t_list		*lst2;

	retour = NULL;
	lst2 = NULL;
	if (lst != NULL)
		if ((retour = ft_lstnew(lst->content, lst->content_size)) != NULL)
		{
			lst2 = f(lst);
			retour = lst2;
			while (lst->next != NULL)
			{
				lst2->next = f(lst->next);
				lst2 = lst2->next;
				lst = lst->next;
			}
		}
	return (retour);
}
