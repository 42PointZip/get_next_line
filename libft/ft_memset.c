/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:20:05 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/06 13:38:18 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	a = b;
	if (len > 0)
	{
		while (i < len)
		{
			a[i] = (unsigned char)c;
			i++;
		}
	}
	return (b);
}
