/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setenv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 19:08:27 by rluder            #+#    #+#             */
/*   Updated: 2017/11/12 21:10:14 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/shell_21sh.h"
#include "../../incs/key.h"

int				cd_change_oldpwd(char *old_pwd)
{
	if (check_if_env_exist("OLDPWD", NULL) == false)
	{
		if (add_env_("OLDPWD", old_pwd) == ERROR)
			return (false);
	}
	else if (modify_env_value("OLDPWD", old_pwd) == false)
		return (false);
	return (true);
}

static int		ft_put_error(int choice)
{
	if (choice == 1)
	{
		ft_putstr_fd("Error: the name argument is a null ", STDERR_FILENO);
		ft_putendl_fd("pointer, or points to an empty string", STDERR_FILENO);
	}
	else
	{
		ft_putstr_fd("Error: the name argument points to a ", STDERR_FILENO);
		ft_putendl_fd("string containing an '=' character.", STDERR_FILENO);
	}
	return (false);
}

int				builtin_setenv(t_cmd *content)
{
	t_21sh		*sh;
	char		*env_name;
	char		*env_value;

	if ((sh = get_21sh(NULL)) == NULL)
		return (ERROR);
	if (len_y(content->arg) == 1)
		return (ft_put_error(1));
	if (len_y(content->arg) > 1)
	{
		if (ft_strchr(content->arg[1], '=') || ft_strequ("", content->arg[1]))
			return (ft_put_error(2));
		env_name = len_y(content->arg) > 1 ? content->arg[1] : NULL;
		env_value = len_y(content->arg) > 2 ? content->arg[2] : NULL;
		if (check_if_env_exist(env_name, NULL) == false)
			add_env_(env_name, env_value);
		else
			modify_env_value(env_name, env_value);
		if (ft_strequ(env_name, "PATH"))
		{
			del_bin();
			save_path(&sh, content->arg[2]);
		}
	}
	return (true);
}
