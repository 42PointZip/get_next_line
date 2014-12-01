/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 12:08:29 by                   #+#    #+#             */
/*   Updated: 2014/12/01 12:24:58 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main(void)
{
	int	etat;
	int	i;
	int	fd;
	char	*line;
	char	file[] = "get_next_line.c";
	i = 0;
	etat = 2;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		printf("Can't open \"%s\"\n", file);
		return (0);
	}
	while (etat != 0)
	{
		etat = get_next_line(fd, &line);
		printf("[Etat %d] Line %d : %s\n", etat, i, line);
		i++;
	}
	return (0);
}
