/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 16:52:40 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/20 20:20:40 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 3
//## linked list

//import `malloc`, `free`
#include <stdlib.h>

/** @brief map a list
 *
 * @param lst	first node of a list to map
 * @param f		function used for mapping
 * @param del	function used to delete content
 * @return new list
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!f)
		return (0);
	(void)del;
	new = 0;
	while (lst)
	{
		ft_lstadd_back(&new, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (new);
}
