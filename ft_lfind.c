/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lfind.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/14 18:32:32 by bdekonin      #+#    #+#                 */
/*   Updated: 2023/01/14 19:08:58 by bdekonin      ########   odam.nl         */
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
	@return Pointer to the first element in the array that matches the key, or NULL if no match is found
*/
void *ft_lfind(const void *key, const void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *))
{
	const char *current = (const char *)base;
	for (size_t i = 0; i < nmemb; i++) {
		if (compar(key, current) == 0) {
			return (void*)current;
		}
		current += size;
	}
	return NULL;
}
