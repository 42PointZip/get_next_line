/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:27:08 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/14 10:59:52 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void					*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char				*d;
	const unsigned char	*s;
	size_t				i;

	d = dst;
	s = src;
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			if (s[i] == (unsigned char)c)
			{
				d[i] = s[i];
				return (dst + i + 1);
			}
			d[i] = s[i];
			i++;
		}
	}
	return (NULL);
}
