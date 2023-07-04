/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:42:52 by sagemura          #+#    #+#             */
/*   Updated: 2023/07/04 18:28:43 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("%p\n", "A");
	printf("%p\n", "a");
	printf("%p\n", "0");
	printf("%p\n", "aa");
	printf("%p\n", "AA");
	printf("%p\n", "00");
	printf("%p\n", ((void *)0));
	printf("%p\n", ((void *)1));

}

// int	main(void)
// {
// 	int c;
// 	c = 1010;
// 	printf("%x\n", c);
// 	printf("%X\n", c);
// }