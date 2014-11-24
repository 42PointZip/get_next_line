/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:32:00 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/13 14:13:47 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include <string.h>

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] && s2[i]) && i < n)
		i++;
	if (s1[i] == '\0' && s2[i])
		return (-1);
	if (s2[i] == '\0' && s1[i])
		return (1);
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
