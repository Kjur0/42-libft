/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 20:00:08 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/18 20:44:13 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//# Part 2
//## string creation

//import `malloc`, `free`
#include <stdlib.h>

/** \brief free array of strings
 *
 * \param arr	array to be destroyed
 * \param len	lenght of array
 * \return `nullptr`
 */
static char	**free_arr(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		free(arr[i++]);
	free(arr);
	return (0);
}

/** \brief counts words in a string (delimited)
 *
 * \param str string
 * \param c delimiter
 * \return number of words
 */
static int	count_words(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (!str[i])
			break ;
		count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

/** \brief duplicate the first word
 *
 * \param str	string
 * \param c		delimiter
 * \return word
 * \retval 0 action failed
 */
static char	*word_dup(const char *str, char c)
{
	char	*dup;
	size_t	i;
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	dup = malloc(len + 1);
	if (!dup)
		return (0);
	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

/** \brief split a string
 *
 * \param s	string to split
 * \param c	delimiter
 * \return `NUL`-terminated array of strings
 * \retval 0 spliting failed
*/
char	**ft_split(char const *s, char c)
{
	char			**arr;
	const size_t	words = count_words(s, c);
	size_t			i;
	size_t			j;

	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		arr[j] = word_dup(&s[i], c);
		if (!arr[j++])
			return (free_arr(arr, j));
		while (s[i] && s[i] != c)
			i++;
	}
	arr[j] = 0;
	return (arr);
}
