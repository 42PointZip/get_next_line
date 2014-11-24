/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 08:53:22 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/21 16:17:09 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	k;
	char	*temp;

	i = 0;
	if (!s)
		return (NULL);
	if ((k = ft_strlen(s) - 1) == 0)
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	if (!*s || k == i - 1)
		return (ft_strnew(1));
	while (k > 0 && (s[k] == ' ' || s[k] == '\t' || s[k] == '\n'))
		k--;
	temp = ft_strsub(s, (unsigned int)i, (k - i + 1));
	return (temp);
}
