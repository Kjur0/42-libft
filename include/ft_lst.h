/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 03:37:47 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 03:47:31 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LST_H
# define FT_LST_H

# include <stddef.h>

/// linked list node
typedef struct s_list
{
	void			*content; ///< data contained in the node
	struct s_list	*next; ///< pointer to the next node or `0` (last node)
}	t_list;

/** @brief create a new list node
 *
 * @param content	content to be stored in the node
 * @return			pointer to new list node
 */
t_list	*ft_lstnew(void *content);

/** @brief add node to front of list
 *
 * @param lst	first node of a list
 * @param new	list node to be added
 */
void	ft_lstadd_front(t_list **lst, t_list *new);
/** @brief add node to the back of a list
*
* @param lst	first node of a list
* @param new	list node to be added
*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/** @brief count nodes in a list
 *
 * @param lst	first node of a list
 * @return		number of nodes
 */
size_t	ft_lstsize(t_list *lst);

/** @brief get last node of a list
 *
 * @param lst	first node of a list
 * @return		last node in a list
 */
t_list	*ft_lstlast(t_list *lst);

/** @brief delete a node
 *
 * @param lst	node to be deleted
 * @param del	function used to delete content
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/** @brief delete a list
 *
 * @warning this will delete all the nodes
 *
 * @param lst	first node of a list
 * @param del	function used to delete content
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
 * @return		new list
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif