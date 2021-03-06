/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 21:56:19 by rluder            #+#    #+#             */
/*   Updated: 2017/01/27 21:56:20 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dest, const char *src)
{
	unsigned int	i;

	i = 0;
	while ((dest[i] = (char)src[i]) != '\0')
		i++;
	dest[i] = '\0';
	return (dest);
}
