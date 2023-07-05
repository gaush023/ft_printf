/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:41:35 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/05 16:33:07 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	transform_hex(unsigned long original_n, char *buffer, size_t *i)
{
	unsigned long remainder;

	remainder = original_n % 16;
	original_n = original_n / 16;
	if (original_n > 0)
		transform_hex(original_n, buffer, i);
	if (remainder >= 0 && remainder <= 9)
		buffer[(*i)++] = '0' + remainder;
	else
		buffer[(*i)++] = 'A' + remainder - 10;
}