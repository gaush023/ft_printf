/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:49:09 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/05 18:04:23 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	help_distinction(const char *format)
{
	char	*compare_ptr;
	size_t	n;

	n = 0;
	compare_ptr = "cspdiuxX%";
	while (compare_ptr[n])
	{
		if (*format == compare_ptr[n])
			return (0);
		n++;
	}
	return (1);
}

static ssize_t	do_distinction(t_format *format, va_list args)
{
	format->index++;
	if (*(format->str + format->index) == 'c')
		return (print_char(args));
	else if (*(format->str + format->index) == 's')
		return (print_string(args));
	else if (*(format->str + format->index) == 'p')
		return (print_void_hex(args));
	else if (*(format->str + format->index) == 'd' || *(format->str
			+ format->index) == 'i')
		return (print_demical(args));
	else if (*(format->str + format->index) == 'u')
		return (unsigned_decimal_print(args));
	else if (*(format->str + format->index) == 'x')
		return (print_hex(args, 0));
	else if (*(format->str + format->index) == 'X')
		return (print_hex(args, 1));
	else if (*(format->str + format->index) == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar('%'));
}

static ssize_t	distinction(t_format *format, va_list args)
{
	if (*(format->str + format->index) == '%')
	{
		if (help_distinction(format->str + format->index + 1) == 0)
			return (do_distinction(format, args));
	}
	return (ft_putchar(*(format->str + format->index)));
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	t_format	data;
	ssize_t		status;
	size_t		count;

	data.str = format;
	data.index = 0;
	count = 0;
	status = 0;
	va_start(args, format);
	while (data.str[data.index] != '\0')
	{
		status = distinction(&data, args);
		if (status == -1)
			break ;
		count += status;
		data.index++;
	}
	va_end(args);
	return (count);
}
