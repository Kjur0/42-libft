/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:23:13 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/19 17:24:55 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

//# Part 1 - libc

//## char checks
/** @brief checks for an alphabetic character
 *
 * @param c character to check
 * @retval 0 `false`
 * @retval 1 `true`
 */
int		ft_isalpha(int c);
/** @brief checks for a digit
 *
 * @param c character to check
 * @retval 0 `false`
 * @retval 1 `true`
 */
int		ft_isdigit(int c);
/** @brief checks for an alphanumeric character
 *
 * equivilent to:
 * ```c
 * ft_isalpha(c) || ft_isdigit(c)
 * ```
 *
 * @param c character to check
 * @retval 0 `false`
 * @retval 1 `true`
 */
int		ft_isalnum(int c);
/** @brief checks is the character in ASCII range
 *
 * checks if value is between `0` and `127` (7-bit unsigned integer)
 *
 * @param c character to check
 * @retval 0 `false`
 * @retval 1 `true`
 */
int		ft_isascii(int c);
/** @brief checks is the character printable (non-control)
 *
 * @param c character to check
 * @retval 0 `false`
 * @retval 1 `true`
 */
int		ft_isprint(int c);

//## char convertion
/** @brief convert character to uppercase
 *
 * @note inputs are treated as `unsigned char` (except for `-1`)
 *
 * @param c lowercase character
 * @return uppercase character
 */
int		ft_toupper(int c);
/** @brief convert character to lowercase
 *
 * @note inputs are treated as `unsigned char` (except for `-1`)
 *
 * @param c uppercase character
 * @return lowercase character
 */
int		ft_tolower(int c);

//## string manipulation
/** @brief calculate string length
 *
 * count characters up to first `NUL`-terminator (`'\0'`)
 *
 * @param s string being array of `char`
 * @return length of a string
 */
size_t	ft_strlen(const char *s);
/** @brief safely copy a string
 *
 * copy up to specified amount of characters from `NUL`-terminated string
 * ensuring the result is `NUL`-terminated and doesn't exceed size limit
 *
 * @param dst	pointer to destination
 * @param src	pointer to source
 * @param size	max size of the result
 * @return `ft_strlen(src) + min(size, ft_strlen(dst))`
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
 * @return `ft_strlen(src)`
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);
/** @brief locate character in a string
 *
 * first occurrence
 *
 * @note inputs are treated as `unsigned char`
 *
 * @param s string
 * @param c char to locate
 * @return pointer to first occurrence
 * @retval 0 character not found
*/
char	*ft_strchr(const char *s, int c);
/** @brief locate character in a string (reverse)
 *
 * last occurrence
 *
 * @note inputs are treated as `unsigned char`
 *
 * @param s string
 * @param c char to locate
 * @return pointer to last occurrence
 * @retval 0 character not found
 */
char	*ft_strrchr(const char *s, int c);
/** @brief compare two strings
 *
 * compares only first non-matching character.
 * operates on ASCII codes
 *
 * @param s1	first string
 * @param s2	second string
 * @param n		max length for comparison
 * @return difference between first unmatched chars
 * @retval 0 no difference
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/** @brief locate a substring in a string
 *
 * @param big		string to search in
 * @param little	string to search for
 * @param len		max length for searching
 * @return pointer to substring
 * @retval 0 substring not located
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);
/** @brief duplicate a string
 *
 * @param s string to duplicate
 * @return duplicated string
 * @retval 0 duplication failed
 */
char	*ft_strdup(const char *s);

//## memory manipulation
/** @brief fill memory area with constant byte
 *
 * @param s pointer to memory area
 * @param c constant byte for filling
 * @param n number of bytes to fill
 * @return pointer to filled memory (`s`)
 */
void	*ft_memset(void *s, int c, size_t n);
/** @brief fill memory area with zero
 *
 * @param s pointer to memory area
 * @param n number of bytes to zero
 */
void	ft_bzero(void *s, size_t n);
/** @brief copy memory area
 *
 * @warning `src` and `dest` must not overlap
 *
 * @param dest	pointer to destination
 * @param src	pointer to source
 * @param n		number of bytes to copy (length)
 * @return pointer to destination
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);
/** @brief move memory area
 *
 * @warning `src` and `dest` may overlap, but `src` might be overridden
 *
 * @param dest	pointer to destination
 * @param src	pointer to source
 * @param n		number of bytes to move (length)
 * @return pointer to destination
 */
void	*ft_memmove(void *dest, const void *src, size_t n);
/** @brief scan memory for a byte
 *
 * first occurrence
 *
 * @param s pointer to memory area
 * @param c byte to search for
 * @param n size of memory area
 * @return pointer to first occurrence
 * @retval 0 byte not found
*/
void	*ft_memchr(const void *s, int c, size_t n);
/** @brief compare memory areas
 *
 * @param s1	first memory area
 * @param s2	second memory area
 * @param n		size to compare
 * @return difference between first unmatched bytes
 * @retval 0 no difference
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/** @brief allocate dynamic memory for an array
 *
 * @param nmemb	number of members
 * @param size	size of a member
 * @return pointer to dynamic memory
 * @retval 0 allocation failed
 */
void	*ft_calloc(size_t nmemb, size_t size);

//## string convertion
/** @brief convert a string to a number
 *
 * @warning errors are not detected
 *
 * @param nptr string
 * @return number
 */
int		ft_atoi(const char *nptr);

//# Part 2 - additional functions

//## string creation
/** @brief create a substring from a string
 *
 * @param s		original string
 * @param start	starting index of the substring
 * @param len	max length of a the substring
 * @return created substring
 * @retval 0 creation failed
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);
/** @brief join two strings into a new one
 *
 * @param s1	first string
 * @param s2	second string
 * @return new string
 * @retval 0 joining failed
 */
char	*ft_strjoin(char const *s1, char const *s2);
/** @brief trim a string
 *
 * @param s1	string to trim
 * @param set	set of characters to be removed
 * @return new trimmed string
 * @retval 0 trimming failed
*/
char	*ft_strtrim(char const *s1, char const *set);
/** @brief split a string
 *
 * @param s	string to split
 * @param c	delimiter
 * @return `NUL`-terminated array of strings
 * @retval 0 spliting failed
*/
char	**ft_split(char const *s, char c);
/**
 * @brief converts number to string
 *
 * @param n number to be converted
 * @return string representing the number
 * @retval 0 convertion failed
 */
char	*ft_itoa(int n);
/** @brief map a string
 *
 * @param s string to map
 * @param f function used for mapping
 * @return new string
 * @retval 0 mapping failed
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/** @brief interate over a string
 *
 * @param s string to iterate over
 * @param f function
 */
void	ft_striteri(char const *s, void (*f)(unsigned int, char));

//## writing
/** @brief write a character
 *
 * @param c		character to write
 * @param fd	file descriptor for writing
 */
void	ft_putchar_fd(char c, int fd);
/** @brief write a string
 *
 * @param s		string to write
 * @param fd	file descriptor for writing
 */
void	ft_putstr_fd(char *s, int fd);
/** @brief write a string ending with new line
 *
 * @param s		string to write
 * @param fd	file descriptor for writing
 */
void	ft_putendl_fd(char *s, int fd);
/** @brief write a number
 *
 * @param n		number to write
 * @param fd	file descriptor for writing
 */
void	ft_putnbr_fd(int n, int fd);

//# Part 3 - linked list

/// linked list node
typedef struct s_list
{
	void			*content; ///< data contained in the node
	struct s_list	*next; ///< pointer to the next node or `0` (last node)
}	t_list;

/** @brief create a new list node
 *
 * @param content content to be stored in the node
 * @return pointer to new list node
 */
t_list	*ft_lstnew(void *content);
/** @brief add node to front of list
 *
 * @param lst first node of a list
 * @param new list node to be added
 */
void	ft_lstadd_front(t_list **lst, t_list *new);
/** @brief count node in a list
 *
 * @param lst first node of a list
 * @return number of nodes
 */
int		ft_lstsize(t_list *lst);
/** @brief get last node of a list
 *
 * @param lst first node of a list
 * @return last node in a list
 */
t_list	*ft_lstlast(t_list *lst);
/** @brief add node to the back of a list
 *
 * @param lst first node of a list
 * @param new list node to be added
 */
void	ft_lst_add_front(t_list **lst, t_list *new);
/** @brief delete a node
 *
 * @param lst node to be deleted
 * @param del function used to delete content
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/** @brief delete a list
 *
 * @warning this will delete all the nodes
 *
 * @param lst first node of a list
 * @param del function used to delete content
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));
/** @brief iterate over a list
 *
 * @param lst	first node of a list to iterate over
 * @param f		function applied to list contents
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));
/** @brief map a list
 *
 * @param lst	first node of a list to map
 * @param f		function used for mapping
 * @param del	function used to delete content
 * @return new list
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));


#endif
