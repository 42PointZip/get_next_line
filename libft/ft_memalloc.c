/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 12:04:07 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/14 13:54:35 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void				*ft_memalloc(size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)malloc(size);
	if (!ptr)
		return (NULL);
	if (ptr[i])
	{
		while (i < size)
		{
			ptr[i] = 0;
			i++;
		}
	}
	return ((void *)ptr);
}
