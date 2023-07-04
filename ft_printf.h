/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:46:42 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/04 19:52:16 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
typedef struct s_format
{
	const char	*str;
	size_t		index;
}				t_format;

int				ft_printf(const char *format, ...);
int				print_char(va_list args);
int				ft_putchar(char c);
void			transform_hex(int original_n, char *buffer, size_t *i);
size_t			print_demical(va_list args);
size_t			print_void_hex(va_list args);
size_t			print_hex(va_list args, int n);
size_t			print_string(va_list args);
size_t			unsigned_decimal_print(va_list args);

#endif
