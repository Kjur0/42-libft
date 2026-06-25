/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 16:52:40 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/25 17:41:13 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//# Part 3
//## linked list

//import `free`
#include <stdlib.h>

/** @brief delete a node
 *
 * @param lst	node to be deleted
 * @param del	function used to delete content
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (lst->content && del)
		del(lst->content);
	free(lst);
}
