/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:42:52 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/02 20:25:39 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	c;
	char	*str;
	int		d;
	int		i;
	int		x;

	c = '=';
	str = "a orange";
	d = 12345678;
	i = -21234567;
	x = 1010;
	ft_printf("orange%%\n");
	ft_printf("%c", c);
	ft_printf("\n");
	ft_printf("%s\n", str);
	ft_printf("%d\n", d);
	ft_printf("%d\n", i);
	ft_printf("%X\n", x);
	printf("%X\n", x);
	ft_printf("%x\n", x);
	printf("%x\n", x);
}

// int	main(void)
// {
// 	int c;
// 	c = 1010;
// 	printf("%x\n", c);
// 	printf("%X\n", c);
// }