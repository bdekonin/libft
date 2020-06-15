/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_array_bonus.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/05/16 23:38:48 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/06/15 10:57:35 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_array(void **ptr, int size)
{
	while (size > 0)
	{
		size--;
		free(ptr[size]);
	}
	free(ptr);
}
