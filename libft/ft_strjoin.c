/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 21:56:58 by rluder            #+#    #+#             */
/*   Updated: 2017/05/15 15:52:49 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char			*new_s;
	unsigned int	len;
	unsigned int	i;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len = 0;
	if (s1 != NULL)
		len += ft_strlen(s1);
	if (s2 != NULL)
		len += ft_strlen(s2);
	if ((new_s = (char*)ft_memalloc(sizeof(*new_s) * len + 1)) == NULL)
		return (NULL);
	i = 0;
	len = 0;
	if (s1 != NULL)
		while (s1[i] != '\0')
			new_s[len++] = s1[i++];
	i = 0;
	if (s2 != NULL)
		while (s2[i] != '\0')
			new_s[len++] = s2[i++];
	new_s[len] = '\0';
	return (new_s);
}
