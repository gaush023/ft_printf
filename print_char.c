/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:12:14 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/05 19:00:48 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(va_list args)
{
	char	c;

	c = (char)va_arg(args, int);
	if (!ft_isascii(c))
		return (-1);
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}
