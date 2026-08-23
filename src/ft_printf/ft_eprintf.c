/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjurkows <kjurkows@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 17:25:38 by kjurkows          #+#    #+#             */
/*   Updated: 2026/08/23 05:22:28 by kjurkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

#include <ft_io.h>
#include <ft_char.h>

#include "ft_printf_utils.h"

#include <stdarg.h>

/** @brief get the width for a formatter
 *
 * @internal handles width reading ft_eprintf_format()
 * @param str pointer to current position in format string
 * @return parsed value
 */
static int	ft_eprintf_width(const char **str)
{
	int	res;

	res = 0;
	while (ft_isdigit(**str))
	{
		res = 10 * res + (*(*str)++ - '0');
	}
	(*str)--;
	return (res);
}

/** @brief print data substituting the formatter
 *
 * @see ft_eprintf_format()
 * @see ft_printf_c()
 * @see ft_printf_s()
 * @see ft_printf_p()
 * @see ft_printf_di()
 * @see ft_printf_u()
 * @see ft_printf_x()
 *
 * @internal
 * @param fmt	pointer to current position in format string
 * @param args	variadic arguments list
 * @param lst	pointer to linked list
 * @return status code
 * @retval 0 success
 * @retval 1 error
*/
static int	ft_eputfmt(const char **fmt, va_list args, t_list **lst,
	t_printf_flags *flags)
{
	if (**fmt == 'c')
		ft_printf_c(va_arg(args, int), lst, flags);
	else if (**fmt == 's')
		ft_printf_s(va_arg(args, char *), lst, flags);
	else if (**fmt == 'p')
		ft_printf_p(va_arg(args, void *), lst, flags);
	else if (**fmt == 'd' || **fmt == 'i')
		ft_printf_di(va_arg(args, int), lst, flags);
	else if (**fmt == 'u')
		ft_printf_u(va_arg(args, unsigned int), lst, flags);
	else if (**fmt == 'x' || **fmt == 'X')
		ft_printf_x(va_arg(args, unsigned int), lst, flags, **fmt == 'X');
	else if (**fmt == '%')
		ft_lst_char(lst, '%');
	else
	{
		free(flags);
		return (EXIT_FAILURE);
	}
	free(flags);
	(*fmt)++;
	return (EXIT_SUCCESS);
}

/** @brief handle printf formatters and flags
 *
 * Printing is delegated to ft_eputfmt()
 *
 * @see ft_eprintf()
 * @see ft_eprintf_width()
 * @see ft_eputfmt()
 *
 * @internal helper for ft_eprintf()
 * @param fmt	pointer to current format string position
 * @param args	variadic arguments list
 * @param lst	pointer to linked list
 * @return status code
 * @retval 0 success
 * @retval 1 error
 */
static int	ft_eprintf_format(const char **fmt, va_list args, t_list **lst)
{
	t_printf_flags *const	flags = new_printf_flags();

	while (*++(*fmt))
	{
		if (**fmt == '-')
			flags->align_left = true;
		else if (**fmt == '0')
			flags->pad_zero = true;
		else if (**fmt == '.')
		{
			(*fmt)++;
			flags->precision = ft_eprintf_width(fmt);
		}
		else if (**fmt == '#')
			flags->alternate = true;
		else if (**fmt == ' ')
			flags->space = true;
		else if (**fmt == '+')
			flags->sign = true;
		else if (ft_isdigit(**fmt))
			flags->min_width = ft_eprintf_width(fmt);
		else
			return (ft_eputfmt(fmt, args, lst, flags));
	}
	return (ft_eputfmt(fmt, args, lst, flags));
}

/** @brief print linked list to `STDERR` and free it
 *
 * @see ::t_char
 *
 * @internal helper for ft_eprintf
 * @param lst linked list to print
 * @return number of characters printed
*/
static int	ft_lst_eprint(t_list *lst)
{
	t_list	*next;
	int		size;

	size = 0;
	while (lst)
	{
		next = lst->next;
		size++;
		ft_putchar_fd(((t_char *)(lst->content))->c, FD_STDERR);
		ft_lstdelone(lst, free);
		lst = next;
	}
	return (size);
}

/** @brief print a formatted string to `STDERR` substituting with correct data
 *
 * All formatters start with `%`, then are substituted with data passed as `...`
 *
 * Supported formatters:
 * * `%c`
 * * `%s`
 * * `%p`
 * * `%d`
 * * `%i`
 * * `%u`
 * * `%x`
 * * `%X`
 * * `%%`
 *
 * Bonus adds support for following flags
 * (added in between of `%` and specifier):
 * * `-`
 * * `0`
 * * `.`
 * * `#`
 * * ` `
 * * `+`
 * * `<width>`
 *
 * Flags requiring length:
 * * `-`
 * * `0`
 * * `.`
 *
 * @param str	format string
 * @param ...	variadic arguments for substitution
 * @return total length printed to console
 */
int	ft_eprintf(const char *str, ...)
{
	va_list	args;
	t_list	*lst;

	lst = NULL;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			if (ft_eprintf_format(&str, args, &lst))
			{
				ft_lst_eprint(lst);
				va_end(args);
				return (-1);
			}
			continue ;
		}
		ft_lst_char(&lst, *str++);
	}
	va_end(args);
	return (ft_lst_eprint(lst));
}
