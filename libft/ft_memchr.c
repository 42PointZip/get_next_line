/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:25:10 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/07 16:42:44 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ca;
	size_t			i;

	i = 0;
	ca = (unsigned char)c;
	str = (unsigned char *)s;
	while (i != n && str[i] != ca && str)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)s + i);
}
