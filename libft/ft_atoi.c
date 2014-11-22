/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:45:15 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/13 12:16:16 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	n;

	i = 0;
	num = 0;
	n = 1;
	while (str[i] <= 32 && str[i] > 7 && str[i] != 27)
		i++;
	if (str[i] == 45 && str[i + 1] >= 48 && str[i + 1] <= 57)
	{
		n = -1;
		i++;
	}
	if (str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10;
		num = num + (str[i] - 48);
		i++;
	}
	return (num * n);
}
