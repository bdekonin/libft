/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 08:07:31 by bdekonin      #+#    #+#                 */
/*   Updated: 2023/01/14 19:17:12 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif
# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif


# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);

#endif
