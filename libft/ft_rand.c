/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rluder <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 21:55:34 by rluder            #+#    #+#             */
/*   Updated: 2017/01/27 21:55:36 by rluder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <time.h>

int				ft_rand(int min, int max)
{
	static int	loop;

	if (loop == 0)
		srand(time(NULL));
	loop = 1;
	return ((rand() % (max - min + 1)) + min);
}
