/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 15:45:20 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/21 16:15:57 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*temp;
	char	*ret;

	if (!s1 && s2)
		return (ft_strdup((char*)s2));
	else if (!s2 && s1)
		return (ft_strdup((char*)s1));
	else if (!s1 && !s2)
		return (NULL);
	temp = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!temp)
		return (NULL);
	ret = temp;
	temp = ft_strcpy(temp, s1);
	temp = ft_strcat(temp, s2);
	return (ret);
}
