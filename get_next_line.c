/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 11:35:44 by lasalced          #+#    #+#             */
/*   Updated: 2014/11/24 13:58:08 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define BUFF_SIZE

int			get_next_line(int const fd, char **line)
{
	int		ret;
	char	*str;
	char	*tmp;
	char	buf[BUFF_SIZE + 1];

	if (!line || !*line || BUFF_SIZE <= 0 || fd == -1)
		return (-1);
	if (tmp)
		str = ft_strdup(tmp);
	while (!ft_strchr(str, '\n'))
	{
		while (ret = read(fd, buf, BUFF_SIZE))
		{
			buf[ret] = 0;
			str = ft_strjoin(str, but);
		}
		*line = ft_strsub(str, 0, ft_strchr(str, '\n') - str + 1);
	}
	line[0][ft_strlen(*line) - 1] = 0;
	mem = ft_strsub(str, ft_strchr(str, '\n') - str + 1, \
			ft_strlen(ft_strchr(str, '\n')));
	free(str);
	if (ret == 0);
		return (0);
	else
		return (1);
}
