/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 16:18:24 by bdekonin       #+#    #+#                */
/*   Updated: 2019/11/27 18:02:00 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** counts characters of the word
*/

static int	checkstring(char *s, char c, int i)
{
	int a;

	a = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		a++;
	}
	return (a);
}

/*
** It counts how many words there are in a string.
** It first checks if it sees a delimter, if so it adds one to the index and,
** restarts the while loop. once the first if statement is false it checks,
** if it sees a character different then the delimimter then counts that.
** and saves it in J. once a j has been counted it goes to check if it is,
** a word. if it is it resets J and counts the count up by one.
*/

static int	ft_word_count(char *s, char c)
{
	int i;
	int count;
	int j;

	i = 0;
	count = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
			continue;
		}
		if (s[i] != c)
			j++;
		if ((j > 1 && s[i + 1] == c) || (j > 1 && s[i + 1] == '\0') ||
(j == 1 && s[i + 1] == c) || (j == 1 && s[i + 1] == '\0'))
		{
			j = 0;
			count++;
		}
		i++;
	}
	return (count);
}

/*
** x = Length of the string where the index is now located.
** y = array counter.
*/

static char	**splitting(char const *s, char c, int i, char **arr)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y != ft_word_count((char*)s, c))
	{
		if (s[i] != c)
		{
			x = checkstring((char*)s, c, i);
			arr[y] = ft_substr((char*)s, i, x);
			if (!arr[y])
			{
				while (y > 0)
					free(arr[--y]);
				free(arr);
				return (0);
			}
			i = i + x;
			y++;
		}
		i++;
	}
	arr[y] = NULL;
	return (arr);
}

/*
** i =  index. its the counter of the string.
*/

char		**ft_split(char const *s, char c)
{
	int		i;
	char	**arr;

	i = 0;
	if (!s)
		return (NULL);
	arr = (char**)malloc(sizeof(char*) * (ft_word_count((char*)s, c) + 1));
	if (arr == NULL)
		return (NULL);
	arr = splitting((char*)s, c, i, arr);
	return (arr);
}
