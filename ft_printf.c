/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:49:09 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/02 20:24:41 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				print_char(args);
			else if (*format == 's')
				print_string(args);
			else if (*format == 'd' || *format == 'i')
				print_demical(args);
			else if (*format == 'x')
				print_hex(args, 0);
			else if (*format == 'X')
				print_hex(args, 1);
		}
		else
		{
			write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (0);
}
