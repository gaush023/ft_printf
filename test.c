/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:42:52 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/05 17:19:13 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", 10);
	ft_printf("%d\n", 10);
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