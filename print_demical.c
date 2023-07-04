/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_demical.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:47:48 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/04 18:12:21 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_demical(va_list args)
{
	int		n;
	size_t	length;

	n = va_arg(args, int);
	ft_putnbr_fd(n, 1);
	return (length = ft_strlen(ft_itoa(n)));
}
