/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_decimal_print.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuga <shuga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:03:58 by shuga             #+#    #+#             */
/*   Updated: 2023/07/04 00:35:05 by shuga            ###   ########.fr       */
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
	size_t length;

	n = va_arg(args, int);
	ft_putunsignednbr_fd(n, 1);
	return (length = ft_strlen(ft_itoa(n)));
}
