/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/21 12:42:12 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/21 15:49:03 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		size(int i)
{
	size_t		sz;

	sz = 0;
	while (i /= 10)
		sz++;
	return (sz + 1);
}

char			*ft_itoa(int n)
{
	size_t		sz;
	char		*dst;
	char		*ret;

	sz = size(n);
	dst = (char*)malloc(sizeof(char) * sz + (n < 0 ? 1 : 0) + 1);
	if (!dst)
		return (NULL);
	ret = dst;
	if (n == -2147483648)
		return (ft_strcpy(dst, "-2147483648"));
	if (n < 0)
	{
		*dst++ = '-';
		n = -n;
	}
	dst += sz - 1;
	*(dst + 1) = 0;
	while (sz--)
	{
		*dst-- = (char)(n % 10 + '0');
		n /= 10;
	}
	return (ret);
}
