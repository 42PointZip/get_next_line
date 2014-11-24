/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 08:42:49 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/17 09:58:22 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*temp;

	i = 0;
	temp = ft_strdup(s);
	if (!temp || !s || !(*f))
		return (NULL);
	while (temp[i] != '\0')
	{
		temp[i] = f(temp[i]);
		i++;
	}
	return (temp);
}
