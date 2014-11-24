/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 12:36:31 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/14 13:53:20 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char const	*str;
	char		*temp;
	char		*s;

	i = 0;
	str = src;
	s = dst;
	temp = (char*)malloc(sizeof(char) * ft_strlen(str));
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		s[i] = temp[i];
		i++;
	}
	return (dst);
}
