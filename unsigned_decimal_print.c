/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_decimal_print.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:03:58 by shuga             #+#    #+#             */
/*   Updated: 2023/07/05 18:15:34 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putunsignednbr_fd(unsigned int n, int fd)
{
	if (n >= 10)
		ft_putunsignednbr_fd(n / 10, fd);
	ft_putchar_fd((char)(n % 10 + '0'), fd);
}

size_t	unsigned_decimal_print(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	ft_putunsignednbr_fd(n, 1);
	return (count_nbr(n));
}
