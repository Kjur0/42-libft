/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 16:56:25 by kjurkows          #+#    #+#             */
/*   Updated: 2026/06/19 17:27:38 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//# Part 3
//## linked list

/** @brief add node to the back of a list
 *
 * @param lst first node of a list
 * @param new list node to be added
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	ft_lstlast(*lst)->next = new;
}
