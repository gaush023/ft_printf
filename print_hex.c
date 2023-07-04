/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuga <shuga@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:10:10 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/04 00:47:26 by shuga            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	transform_hex(int original_n, char *buffer, size_t *i)
{
	int	remainder;

	remainder = original_n % 16;
	original_n = original_n / 16;
	if (original_n > 0)
		transform_hex(original_n, buffer, i);
	if (remainder >= 0 && remainder <= 9)
		buffer[(*i)++] = '0' + remainder;
	else
		buffer[(*i)++] = 'A' + remainder - 10;
}



size_t	print_hex(va_list args, int n)
{
	int		original_n;
	char	buffer[33];
	size_t	i;
	size_t	j;
	size_t  k;

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
	return (k = ft_strlen(buffer));
}
