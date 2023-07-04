/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:49:09 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/04 08:52:49 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	help_distinction(const char *format)
{
	char	*compare_ptr;
	size_t	n;

	n = 0;
	compare_ptr = "csduxX%";
	while (compare_ptr[n])
	{
		if (*format == compare_ptr[n])
			return (0);
		n++;
	}
	return (1);
}

static ssize_t	distinciton(t_format *format, va_list args)
{
	ssize_t status = -1;

	if (*(format->str + format->index) == '%')
	{
		if (help_distinction(format->str + format->index + 1) == 0) // Check the next character instead
		{
			format->index++;
			if (*(format->str + format->index) == 'c')
			{
				status = print_char(args);
				format->index++;
			}
			else if (*(format->str + format->index) == 's')
			{
				status = print_string(args);
				format->index++;
			}
			else if (*(format->str + format->index) == 'd' || *(format->str + format->index) == 'i')
			{
				status = print_demical(args);
				format->index++;
			}
			else if (*(format->str + format->index) == 'u')
			{
				status = unsigned_decimal_print(args);
				format->index++;
			}
			else if (*(format->str + format->index) == 'x')
			{
				status = print_hex(args, 0);
				format->index++;
			}
			else if (*(format->str + format->index) == 'X')
			{
				status = print_hex(args, 1);
				format->index++;
			}
			else if (*(format->str + format->index) == '%')
			{
				status = ft_putchar('%');
				format->index++;
			}
			return status;
		}
		else
		{
			status = ft_putchar('%');
			format->index++; // Ensure that '%' is also incremented.
		}
	}
	else
	{
		status = ft_putchar(*(format->str + format->index));
		format->index++;
	}
	return status;
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
		status = distinciton(&data, args);
		if (status == -1)
			break ;
		count += status;
		data.index++;
	}
	va_end(args);
	return (count);
}
