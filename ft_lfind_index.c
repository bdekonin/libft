/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lfind_index.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/14 18:32:32 by bdekonin      #+#    #+#                 */
/*   Updated: 2023/01/15 13:39:00 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
	@brief Finds the first element in an array that matches a given key using a comparison function
	@param key Pointer to the key to search for
	@param base Pointer to the start of the array
	@param nmemb Number of elements in the array
	@param size Size of each element in the array
	@param compar Pointer to the comparison function
	@return int index in the array. If no match is found, returns -1
*/
int ft_lfind_index(const void *key, const void *base, size_t nel, size_t width, int (*compar)(const void *, const void *))
{
	for (size_t i = 0; i < nel; i++)
	{
		if (compar(key, base + i * width) == 0)
			return i;
	}
	return -1;
}

