/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strexpand_bonus.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/15 14:13:39 by bdekonin      #+#    #+#                 */
/*   Updated: 2023/01/14 19:17:31 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// werkt niet met -1 getal
/*
**
**	1 = 
**	0 = nothing happend
** -1 = error
*/

int		ft_strexpand(char **str, size_t size)
{
	size_t	stringlength;
	char	*temp;

	if (size == 0)
		return (0);
	// if (size < 0)
	// 	return (-1);
	stringlength = ft_strlen(*str);
	temp = ft_calloc(stringlength + size, sizeof(char));
	if (!temp)
		return (-1);
	temp = ft_memcpy(temp, *str, stringlength + size);
	// temp = ft_memset(temp, 'a', stringlength + size);
	free(*str);
	*str = temp;
	return (1);
}
