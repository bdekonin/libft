/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 11:09:27 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/04/26 20:48:17 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	len = ft_strlen(s1);
	if (!s1 || !s2)
		return (NULL);
	str = ft_calloc((len + ft_strlen(s2) + 1), sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len);
	ft_memcpy(str + len, s2, ft_strlen(s2));
	return (str);
}
