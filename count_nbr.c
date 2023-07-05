/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:11:47 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/05 18:13:42 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	count_nbr(long n)
{
	size_t	length;

	length = 0;
	if (n < 0)
	{
		n = n * -1;
		length++;
	}
	while (n >= 10)
	{
		n = n / 10;
		length++;
	}
	length++;
	return (length);
}