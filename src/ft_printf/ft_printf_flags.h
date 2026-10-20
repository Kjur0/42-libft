/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 20:40:29 by kjurkows          #+#    #+#             */
/*   Updated: 2026/10/20 18:05:17 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FLAGS_H
# define FT_PRINTF_FLAGS_H

# include <stdbool.h>

/** @brief struct for storing flags
 *
 * @internal
*/
typedef struct s_printf_flags
{
	int		precision; ///< what precision is set (`.<width>`)
	int		min_width; ///< minimum width (`<width>`)
	bool	align_left; ///< whether to align left (`-`)
	bool	pad_zero; ///< whether to pad with zeros (`0`)
	bool	alternate; ///< whether to use alternate version (`#`)
	bool	space; ///< whether to leave space for sign (` `)
	bool	sign; ///< whether to always print sign (`+`)
}	t_printf_flags;

/** @brief create new ::t_printf_flags with default values
 *
 * @internal
 * @return default ::t_printf_flags
*/
t_printf_flags	*new_printf_flags(void);

#endif
