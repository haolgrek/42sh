/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 21:54:46 by rluder            #+#    #+#             */
/*   Updated: 2017/01/27 21:54:48 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_putendl_fd(const char *s, int fd)
{
	unsigned int	len;

	len = ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return (len + 1);
}
