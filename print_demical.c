/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_demical.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:47:48 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/05 18:12:15 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include <stdio.h>
// #include <limits.h>

// int	main(void)
// {
// 	int		n;
// 	size_t	length;

// 	n = INT_MIN;
// 	length = count_nbr(n);
// 	printf("%zu", length);
// }

size_t	print_demical(va_list args)
{
	int		n;

	n = va_arg(args, int);
	ft_putnbr_fd(n, 1);
	return (count_nbr(n));
}
