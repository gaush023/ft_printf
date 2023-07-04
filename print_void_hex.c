/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_void_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:12:02 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/04 19:55:19 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_void_hex(va_list args)
{
	char			ptr[33];
	long long int	original_n;
	size_t			n;
	size_t			length;

	original_n = va_arg(args, int);
	n = 0;
	transform_hex(original_n, ptr, &n);
	ptr[n] = '\0';
	ft_putstr_fd(ptr, 1);
	return (length = ft_strlen(ptr));
}
