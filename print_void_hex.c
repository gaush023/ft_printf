/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_void_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:12:02 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/05 18:16:03 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_void_hex(va_list args)
{
	char			ptr[33];
	long long int	original_n;
	size_t			n;
	size_t			j;

	original_n = (long long)va_arg(args, void *);
	n = 0;
	j = 0;
	transform_hex(original_n, ptr, &n);
	ptr[n] = '\0';
	while (j < n)
	{
		ptr[j] = ft_tolower(ptr[j]);
		j++;
	}
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(ptr, 1);
	return (ft_strlen(ptr) +2);
}
