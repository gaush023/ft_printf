/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:10:10 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/04 19:46:13 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


size_t	print_hex(va_list args, int n)
{
	int		original_n;
	char	buffer[33];
	size_t	i;
	size_t	j;
	size_t	length;

	original_n = va_arg(args, int);
	i = 0;
	transform_hex(original_n, buffer, &i);
	buffer[i] = '\0';
	j = 0;
	if (n == 0)
	{
		while (j < i)
		{
			buffer[j] = ft_tolower(buffer[j]);
			j++;
		}
	}
	ft_putstr_fd(buffer, 1);
	return (length = ft_strlen(buffer));
}
