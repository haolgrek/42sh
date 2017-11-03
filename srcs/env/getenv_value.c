/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getenv_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 17:06:31 by rluder            #+#    #+#             */
/*   Updated: 2016/12/29 17:06:46 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/shell_21sh.h"
#include "../incs/key.h"

char						*getenv_value(char *name)
{
	t_env					*curs;
	t_21sh					*sh;

	if ((sh = get_21sh(NULL)) == NULL)
		return (NULL);
	curs = sh->env;
	while (curs != NULL)
	{
		if (ft_strcmp(name, curs->name) == 0)
			return (curs->value);
		curs = curs->next;
	}
	return (NULL);
}
