/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 21:53:32 by rluder            #+#    #+#             */
/*   Updated: 2017/01/27 21:53:33 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*mem_dest;
	unsigned char	*mem_src;
	unsigned int	i;

	mem_dest = (unsigned char *)dest;
	mem_src = (unsigned char *)src;
	if (n)
	{
		i = (dest > src) ? n - 1 : 0;
		while (n--)
		{
			mem_dest[i] = mem_src[i];
			i = (dest > src) ? i - 1 : i + 1;
		}
	}
	return (mem_dest);
}
