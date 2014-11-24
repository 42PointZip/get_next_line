/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 09:58:27 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/17 10:05:55 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*temp;

	i = 0;
	temp = ft_strdup(s);
	if (!temp || !s || !(*f))
		return (NULL);
	while (temp[i] != '\0')
	{
		temp[i] = f(i, temp[i]);
		i++;
	}
	return (temp);
}
