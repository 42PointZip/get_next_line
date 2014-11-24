/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 10:51:31 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/20 11:44:07 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			j;
	char			*temp;
	char			*dst;

	j = 0;
	if (!s || !*s || !len)
		return (NULL);
	temp = ft_memalloc(len);
	dst = temp;
	while (j < len)
	{
		temp[j] = s[start];
		j++;
		start++;
	}
	temp[j] = '\0';
	return (dst);
}
