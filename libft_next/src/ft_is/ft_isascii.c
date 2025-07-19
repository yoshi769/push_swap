/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaso <yaso@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:36:00 by yaso              #+#    #+#             */
/*   Updated: 2025/07/19 14:59:56 by yaso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>

// int	main(void)
// {
// 	// Test the function
// 	char test1 = 'A'; // ASCII character
// 	char test2 = 128; // Non-ASCII character
// 	printf("ft_isascii('%c') = %d\n", test1, ft_isascii(test1));
// 	// Should print 1
// 	printf("ft_isascii('%c') = %d\n", test2, ft_isascii(test2));
// 	// Should print 0
// 	return (0);
// }
