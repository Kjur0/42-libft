/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 02:44:43 by kjurkows          #+#    #+#             */
/*   Updated: 2026/09/02 17:35:20 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

# include <stddef.h>

//## string manipulation

/** @brief safely copy a string
 *
 * copy up to specified amount of characters from `NUL`-terminated string
 * ensuring the result is `NUL`-terminated and doesn't exceed size limit
 *
 * @param dst	pointer to destination
 * @param src	pointer to source
 * @param size	max size of the result
 * @return 		`ft_strlen(src) + min(size, ft_strlen(dst))`
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
/** @brief safely concatenate two strings
 *
 * concatenate two string to a string of specified length
 * ensuring the result is `NUL`-terminated and doesn't exceed size limit
 *
 * @param dst	pointer to destination
 * @param src	pointer to source
 * @param size	max size of the result
 * @return		`ft_strlen(src)`
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/** @brief duplicate a string
 *
 * @param s			string to duplicate
 * @return			duplicated string
 * @retval `NULL`	duplication failed
 */
char	*ft_strdup(const char *s);

/** @brief create a substring from a string
 *
 * @param s			original string
 * @param start		starting index of the substring
 * @param len		max length of a the substring
 * @return			created substring
 * @retval `NULL`	creation failed
 */
char	*ft_substr(char const *s, size_t start, size_t len);

/** @brief join two strings into a new one
 *
 * @param s1		first string
 * @param s2		second string
 * @return			new string
 * @retval `NULL`	joining failed
 */
char	*ft_strjoin(char const *s1, char const *s2);

/** @brief trim a string
 *
 * @param s1		string to trim
 * @param set		set of characters to be removed
 * @return			new trimmed string
 * @retval `NULL`	trimming failed
*/
char	*ft_strtrim(char const *s1, char const *set);

/** @brief split a string
 *
 * @param s			string to split
 * @param c			delimiter
 * @return			`NUL`-terminated array of strings
 * @retval `NULL`	spliting failed
*/
char	**ft_split(char const *s, char c);

/** @brief map a string
 *
 * @param s			string to map
 * @param f			function used for mapping
 * @return			new string
 * @retval `NULL`	mapping failed
 */
char	*ft_strmapi(char const *s, char (*f)(size_t, char));
/** @brief iterate over a string
 *
 * @param s	string to iterate over
 * @param f	function
 */
void	ft_striteri(char *s, void (*f)(size_t, char *));

//## string examination

/** @brief calculate string length
 *
 * count characters up to first `NUL`-terminator (`'\0'`)
 *
 * @param s	string being array of `char`
 * @return	length of a string
 */
size_t	ft_strlen(const char *s);

/** @brief compare two strings
 *
 * compares only first non-matching character.
 * operates on ASCII codes
 *
 * @param s1	first string
 * @param s2	second string
 * @param n		max length for comparison
 * @return		difference between first unmatched chars
 * @retval 0	no difference
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/** @brief locate character in a string
 *
 * first occurrence
 *
 * @param s			string
 * @param c			char to locate
 * @return			pointer to first occurrence
 * @retval `NULL`	character not found
*/
char	*ft_strchr(const char *s, char c);
/** @brief locate character in a string (reverse)
 *
 * last occurrence
 *
 * @param s			string
 * @param c			char to locate
 * @return			pointer to last occurrence
 * @retval `NULL`	character not found
 */
char	*ft_strrchr(const char *s, char c);

/** @brief locate a substring in a string
 *
 * @param big		string to search in
 * @param little	string to search for
 * @param len		max length for searching
 * @return			pointer to substring
 * @retval `NULL`	substring not located
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

//## numeric convertion

/** @brief convert a string to a number (`int`)
 *
 * @warning errors are not detected
 *
 * @param nptr	string
 * @return		number
 */
int		ft_atoi(const char *nptr);
/** @brief convert a string to a number (`long`)
 *
 * @warning errors are not detected
 *
 * @param nptr	string
 * @return		number
 */
long	ft_atol(const char *nptr);

/**
 * @brief convert number to string
 *
 * @param n			number to be converted
 * @return			string representing the number
 * @retval `NULL`	conversion failed
 */
char	*ft_itoa(int n);

#endif
