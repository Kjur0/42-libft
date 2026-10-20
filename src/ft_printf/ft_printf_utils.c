/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 21:30:21 by kjurkows          #+#    #+#             */
/*   Updated: 2026/10/20 18:06:45 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

/** @brief add character to linked list
 *
 * @internal
 * @param lst	pointer to linked list
 * @param c		character to add
 */
void	ft_lst_char(t_list **lst, char c)
{
	char	*cc;

	cc = malloc(sizeof(char));
	*cc = c;
	ft_lstadd_back(lst, ft_lstnew(cc));
}

/** @brief add characters from string to linked list
 *
 * @internal
 * @param lst	pointer to linked list
 * @param str	string with characters to add
 */
void	ft_lst_str(t_list **lst, char *str)
{
	while (*str)
		ft_lst_char(lst, *str++);
}
