/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/11 12:03:07 by                   #+#    #+#             */
/*   Updated: 2014/12/11 12:03:46 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# define BUFF_SIZE 8

# include "libft/includes/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int	get_next_line(int fd, char **line);

#endif
