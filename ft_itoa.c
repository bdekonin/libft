/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 14:14:53 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/04/23 10:47:14 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*strconv(char *str, int n, int i)
{
	if (n <= -2147483648)
		return (ft_memcpy(str, "-2147483648", 12));
	if (n >= 2147483647)
		return (ft_memcpy(str, "2147483647", 11));
	if (n == 0)
		return (ft_memcpy(str, "0", 1));
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	if (n > 9)
	{
		strconv(str, n / 10, i - 1);
	}
	str[i - 1] = n % 10 + '0';
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		count;

	count = ft_intlen(n);
	str = malloc(sizeof(char) * count);
	if (!str)
		return (NULL);
	str = strconv(str, n, count - 1);
	str[count - 1] = '\0';
	return (str);
}
