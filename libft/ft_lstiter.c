/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 21:52:08 by rluder            #+#    #+#             */
/*   Updated: 2017/01/27 21:52:10 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list		*tmp;

	tmp = lst;
	while (tmp->next != NULL)
	{
		f(tmp);
		tmp = tmp->next;
	}
	f(tmp);
}
