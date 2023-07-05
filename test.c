/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:42:52 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/05 19:01:34 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	length;

	// printf("%d\n", 10);
	length = ft_printf("%c\n", "aaa");
	ft_printf("%d", length);
	// printf("print hex:%lx\n", 4340227996);
	// ft_printf("%lx\n", 4340227996);
}

// int	main(void)
// {
// 	int c;
// 	c = 1010;
// 	printf("%x\n", c);
// 	printf("%X\n", c);
// }