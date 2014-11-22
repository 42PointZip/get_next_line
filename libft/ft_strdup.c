/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:15:32 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/17 09:18:53 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;

	if (!s1)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	dest = ft_strcpy(dest, s1);
	return (dest);
}
